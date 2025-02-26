#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTCueDataPair.generated.h"

class URSTCueData;

USTRUCT(BlueprintType)
struct FRSTCueDataPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTCueData* Data;
    
    OMD4_API FRSTCueDataPair();
};

