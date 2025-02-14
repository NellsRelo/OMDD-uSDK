#pragma once
#include "CoreMinimal.h"
#include "RSTReplicatedDifficultyData.generated.h"

USTRUCT(BlueprintType)
struct FRSTReplicatedDifficultyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerDifficulty;
    
    OMD4_API FRSTReplicatedDifficultyData();
};

