#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerSelectionParameters.generated.h"

class ARSTPlayerState;

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerSelectionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChosenIndex;
    
    FRSTPlayerSelectionParameters();
};

