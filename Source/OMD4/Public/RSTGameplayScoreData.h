#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayScoreData.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTGameplayScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ScoreTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Instances;
    
    FRSTGameplayScoreData();
};

