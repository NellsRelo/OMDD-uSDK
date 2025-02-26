#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/PlayerStateComponent.h"
#include "RSTHotbarComponent.generated.h"

class ARSTInventoryItemInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTHotbarComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HotbarChangeBlockedTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Slots, meta=(AllowPrivateAccess=true))
    TArray<ARSTInventoryItemInstance*> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SlotCount, meta=(AllowPrivateAccess=true))
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveSlotIndex, meta=(AllowPrivateAccess=true))
    int32 ActiveSlotIndex;
    
public:
    URSTHotbarComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetActiveSlotIndex(int32 NewIndex);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetActiveSlotIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveItemFromSlot(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddItemToSlot(int32 SlotIndex, ARSTInventoryItemInstance* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    ARSTInventoryItemInstance* RemoveItemFromSlot(int32 SlotIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Slots();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SlotCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveSlotIndex(int32 PreviousSlotIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 IndexOfItem(ARSTInventoryItemInstance* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<ARSTInventoryItemInstance*> GetSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ARSTInventoryItemInstance* GetActiveSlotItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetActiveSlotIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void CycleActiveSlotForward();
    
    UFUNCTION(BlueprintCallable)
    void CycleActiveSlotBackward();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetActiveSlotIndex(int32 NewIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddItemToSlot(int32 SlotIndex, ARSTInventoryItemInstance* Item, ARSTInventoryItemInstance*& OutRemovedItem);
    
};

