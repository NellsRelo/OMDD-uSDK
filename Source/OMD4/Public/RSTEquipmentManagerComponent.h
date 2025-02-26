#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/PawnComponent.h"
#include "RSTAttachmentTransactionHandle.h"
#include "RSTLooseTagHandle.h"
#include "RSTEquipmentManagerComponent.generated.h"

class AActor;
class ARSTInventoryItemInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTEquipmentManagerComponent : public UPawnComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EquippedItem, meta=(AllowPrivateAccess=true))
    ARSTInventoryItemInstance* EquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrapPlacementAttachmentGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrapPlacementAttachmentIgnoreGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTAttachmentTransactionHandle TrapPlacementAttachmentHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTLooseTagHandle TrapPlacementTagHandle;
    
public:
    URSTEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRevived(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedItem(ARSTInventoryItemInstance* UnequippedItem);
    
    UFUNCTION(BlueprintCallable)
    void OnDowned(AActor* OwningActor, const AActor* InInstigator);
    
};

