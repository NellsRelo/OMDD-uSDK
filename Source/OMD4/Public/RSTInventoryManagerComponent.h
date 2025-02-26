#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTInventoryList.h"
#include "RSTInventoryManagerComponent.generated.h"

class AActor;
class ARSTInventoryItemInstance;
class URSTInventoryItemDefinition;
class URSTInventoryManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTInventoryManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTInventoryItemDefinition* BarricadeItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bItemInstancesAreAlwaysRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRSTInventoryList InventoryList;
    
public:
    URSTInventoryManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<ARSTInventoryItemInstance*> GetAllItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    ARSTInventoryItemInstance* FindItemWithDefinition(const URSTInventoryItemDefinition* ItemDef) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTInventoryManagerComponent* FindInventoryManagerComponent(AActor* InActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    ARSTInventoryItemInstance* AddItemDefinition(const URSTInventoryItemDefinition* ItemDef);
    
};

