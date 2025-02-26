#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Components/PawnComponent.h"
#include "ERSTTrapPlacementFailureReason.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTPropertyModifiable.h"
#include "RSTTrapPlacementRequest.h"
#include "RSTTrapPlacementComponent.generated.h"

class ARNetworkProxyActor;
class ARSTGameStateBase;
class ARSTInventoryItemInstance;
class ARSTInventoryItemInstance_Trap;
class ARSTTrap;
class ARSTTrapGrid;
class URSTIndicatorDescriptor;
class URSTTrapGridBoxComponent;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTTrapPlacementComponent : public UPawnComponent, public IRSTPropertyModifiable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrapPlacedDelegate, ARSTTrap*, Trap);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTTrapPlacementCountChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlacementFailureDelegate, ARSTTrap*, Trap, ERSTTrapPlacementFailureReason, FailureReason);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapPlacedDelegate OnTrapPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlacementFailureDelegate OnTrapPlacementFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTrapPlacementCountChanged OnTrapPlacementBonusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ARSTTrap*, FRSTTrapPlacementRequest> Requests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> PlacementLimitGroupPenalties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> PlacementLimitGroupBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> RotateTrapWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> SellTrapWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SellingBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTInventoryItemInstance_Trap* InventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTTrap* PendingTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTIndicatorDescriptor* RotateTrapIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTIndicatorDescriptor* SellTrapIndicator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTrapPlacementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bNextTrapFree: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TrapPlacedCue;
    
public:
    URSTTrapPlacementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdatePendingTrap(ARSTTrap* Trap, const FTransform& Transform, ERSTTrapPlacementFailureReason FailureReason, bool bIsValid, bool bHasEnoughCoin, bool bHasReachedPlacementLimit);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Server_SetNextTrapFree();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EndedTrapPlacement(ARSTTrap* Trap);
    
    UFUNCTION(Reliable, Server)
    void Server_ConfirmTrapPlacement(ARSTTrap* Trap, ARSTInventoryItemInstance_Trap* InInventoryItem, const FTransform& Transform, URSTTrapGridBoxComponent* BoxComponent, ARSTTrapGrid* MainTrapGrid, const TArray<ARSTTrapGrid*>& SeamedTrapGrids, FPredictionKey PredictionKey);
    
public:
    UFUNCTION(BlueprintCallable)
    void RotateTrap();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReplacementActorSpawned(ARNetworkProxyActor* NetworkedActor, ARSTTrap* ReplacedTrap);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentWaveChanged(ARSTGameStateBase* GameState);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AddPlacementGroupPenalty(FGameplayTag PlacementLimitGroup, int32 Penalty);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AddPlacementGroupBonus(FGameplayTag PlacementLimitGroup, int32 Bonus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasReachedPlacementLimit(FGameplayTag PlacementLimitGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughCoinForTrap(ARSTInventoryItemInstance* InInventoryItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnoughCoin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUnusedFreeTrapDiscount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetPlacementLimit(FGameplayTag PlacementLimitGroup, int32& OutPlacementLimit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetPlacementCount(FGameplayTag PlacementLimitGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlacementCost(const ARSTInventoryItemInstance_Trap* InInventoryItem) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSellTrap() const;
    

    // Fix for true pure virtual functions not being implemented
};

