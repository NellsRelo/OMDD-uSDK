#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityDurationMessage.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD4_API FRSTAbilityDurationMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    FRSTAbilityDurationMessage();
};

