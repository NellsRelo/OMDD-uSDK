#pragma once
#include "CoreMinimal.h"
#include "ERSTCheatExecutionTime.h"
#include "RSTCheatToRun.generated.h"

USTRUCT(BlueprintType)
struct FRSTCheatToRun {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTCheatExecutionTime Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cheat;
    
    OMD4_API FRSTCheatToRun();
};

