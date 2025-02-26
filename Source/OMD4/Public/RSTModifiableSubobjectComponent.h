#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "RSTTagIdentifierInterface.h"
#include "RSTModifiableSubobjectComponent.generated.h"

class UGameplayAbility;
class URSTModifierComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTModifiableSubobjectComponent : public UActorComponent, public IRSTTagIdentifierInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSTModifierComponent> OwningComponent;
    
    URSTModifiableSubobjectComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbilityRemoved(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityInstanceRemoved(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityInstanceAdded(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityAdded(UGameplayAbility* Ability);
    

    // Fix for true pure virtual functions not being implemented
};

