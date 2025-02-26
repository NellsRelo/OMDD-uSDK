#pragma once
#include "CoreMinimal.h"
#include "ERSTTrapPlacementFlags.h"
#include "RSTInventoryItemInstance.h"
#include "RSTInventoryItemInstance_Trap.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTInventoryItemInstance_Trap : public ARSTInventoryItemInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTrapPlacementFlags TrapPlacementTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacementCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAverageTrapCost;
    
public:
    ARSTInventoryItemInstance_Trap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SellAllPlacedTraps();
    
public:
    UFUNCTION(BlueprintCallable)
    void SellAllPlacedTraps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrapPlacementTypesModified() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlacementCostModified() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlacementCostUpgradeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlacementCostPreviewUpgradeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlacementCost() const;
    
};

