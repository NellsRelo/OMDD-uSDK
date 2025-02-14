#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "RSTModifierContextData.h"
#include "RSTModifierContextData_ApplyGameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct FRSTModifierContextData_ApplyGameplayEffect : public FRSTModifierContextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle ActiveHandle;
    
    OMD4_API FRSTModifierContextData_ApplyGameplayEffect();
};

