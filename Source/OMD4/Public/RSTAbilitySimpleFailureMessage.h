#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAbilitySimpleFailureMessage.generated.h"

class APlayerController;

USTRUCT(BlueprintType)
struct FRSTAbilitySimpleFailureMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FailureTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UserFacingReason;
    
    OMD4_API FRSTAbilitySimpleFailureMessage();
};

