#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "RSTVerbMessage.h"
#include "RSTDamageMessage.generated.h"

USTRUCT(BlueprintType)
struct FRSTDamageMessage : public FRSTVerbMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectSpec DamageSpec;
    
    OMD4_API FRSTDamageMessage();
};

