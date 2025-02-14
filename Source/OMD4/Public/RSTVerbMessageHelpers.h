#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayEffectTypes.h"
#include "RSTDamageMessage.h"
#include "RSTVerbMessage.h"
#include "RSTVerbMessageHelpers.generated.h"

class APlayerController;
class APlayerState;
class UGameplayAbility;
class UObject;

UCLASS(Blueprintable)
class OMD4_API URSTVerbMessageHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTVerbMessageHelpers();

    UFUNCTION(BlueprintCallable)
    static FGameplayCueParameters VerbMessageToCueParameters(const FRSTVerbMessage& Message);
    
    UFUNCTION(BlueprintCallable)
    static APlayerState* GetPlayerStateFromObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static APlayerController* GetPlayerControllerFromObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAbility* GetAbilityFromDamageMessage(const FRSTDamageMessage& Message, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static FRSTVerbMessage CueParametersToVerbMessage(const FGameplayCueParameters& Params);
    
};

