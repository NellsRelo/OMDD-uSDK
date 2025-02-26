#pragma once
#include "CoreMinimal.h"
#include "RSTPostGameSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FRSTPostGameSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> VictorySequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DefeatSequence;
    
    OMD4_API FRSTPostGameSequence();
};

