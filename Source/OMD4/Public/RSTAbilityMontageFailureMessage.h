#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAbilityMontageFailureMessage.generated.h"

class APlayerController;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FRSTAbilityMontageFailureMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FailureTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FailureMontage;
    
    OMD4_API FRSTAbilityMontageFailureMessage();
};

