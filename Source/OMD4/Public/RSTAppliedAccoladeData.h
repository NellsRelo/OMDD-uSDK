#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAppliedAccoladeData.generated.h"

class ARSTPlayerState;

USTRUCT(BlueprintType)
struct OMD4_API FRSTAppliedAccoladeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Accolade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FRSTAppliedAccoladeData();
};

