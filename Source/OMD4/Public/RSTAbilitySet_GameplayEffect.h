#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RSTAbilitySet_GameplayEffect.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FRSTAbilitySet_GameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectLevel;
    
    OMD4_API FRSTAbilitySet_GameplayEffect();
};

