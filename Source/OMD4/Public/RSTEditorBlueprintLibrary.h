#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayEffect.h"
#include "Templates/SubclassOf.h"
#include "RSTEditorBlueprintLibrary.generated.h"

class UGameplayEffect;
class UGameplayEffectComponent;
class UObject;

UCLASS(Blueprintable)
class OMD4_API URSTEditorBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTEditorBlueprintLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEditTime(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EGameplayEffectDurationType GetGEDurationType(UGameplayEffect* Effect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBuildChangelist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesGameplayEffectContainComponent(TSubclassOf<UGameplayEffect> EffectClass, TSubclassOf<UGameplayEffectComponent> GECompClass);
    
};

