#pragma once
#include "CoreMinimal.h"
#include "ERSTTeamThreadState.h"
#include "RSTTeamThreadData.generated.h"

class URSTMetaTeamThreadDefinition;

USTRUCT(BlueprintType)
struct FRSTTeamThreadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTMetaTeamThreadDefinition* TeamThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTeamThreadState State;
    
    OMD4_API FRSTTeamThreadData();
};

