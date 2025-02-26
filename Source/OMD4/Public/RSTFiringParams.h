#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTFiringParams.generated.h"

USTRUCT(BlueprintType)
struct FRSTFiringParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    OMD4_API FRSTFiringParams();
};

