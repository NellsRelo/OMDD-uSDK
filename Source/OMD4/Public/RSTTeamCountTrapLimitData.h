#pragma once
#include "CoreMinimal.h"
#include "RSTTeamCountTrapLimitData.generated.h"

USTRUCT(BlueprintType)
struct FRSTTeamCountTrapLimitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> TeamData;
    
    OMD4_API FRSTTeamCountTrapLimitData();
};

