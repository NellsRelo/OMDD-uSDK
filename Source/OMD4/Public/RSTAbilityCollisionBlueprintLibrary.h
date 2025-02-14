#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RSTAbilityCollisionSpecHandle.h"
#include "RSTAbilityCollisionBlueprintLibrary.generated.h"

class UAbilitySystemComponent;
class URSTAbilityCollisionDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityCollisionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTAbilityCollisionBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRSTAbilityCollisionSpecHandle MakeAbilityCollisionSpec(URSTAbilityCollisionDefinition* Definition, UAbilitySystemComponent* AbilitySystemComponent, float Level);
    
    UFUNCTION(BlueprintCallable)
    static FRSTAbilityCollisionSpecHandle AssignSetByCallerMagnitude(FRSTAbilityCollisionSpecHandle Spec, FGameplayTag DataTag, float Magnitude);
    
};

