#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ERSTModifierTargetType.h"
#include "RSTAppliedModifierData.h"
#include "RSTDirectModifierData.h"
#include "RSTLinkedModifierObjectArray.h"
#include "RSTModifierSpec.h"
#include "RSTModifierSubobjectArray.h"
#include "RSTModifierComponent.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTModifierTargetType TargetType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ModifierInstances, meta=(AllowPrivateAccess=true))
    TArray<FRSTAppliedModifierData> ModifierInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FRSTLinkedModifierObjectArray> LinkedModifierObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTModifierSubobjectArray> ModifiableSubobjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTDirectModifierData> PendingDirectModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FRSTDirectModifierData> DirectModifiers;
    
public:
    URSTModifierComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ModifierInstances();
    
    UFUNCTION(BlueprintCallable)
    void OnPreviewModifierRemoved(FRSTModifierSpec Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnPreviewModifierAdded(FRSTModifierSpec Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnModifierRemoved(FRSTModifierSpec Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnModifierExecuted(FRSTModifierSpec Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnModifierAdded(FRSTModifierSpec Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityRemoved(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityInstanceRemoved(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityInstanceAdded(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityAdded(UGameplayAbility* Ability);
    
};

