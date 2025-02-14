#pragma once
#include "CoreMinimal.h"
#include "RSTReplicatedAcceleration.generated.h"

USTRUCT(BlueprintType)
struct FRSTReplicatedAcceleration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AccelXYRadians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AccelXYMagnitude;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 AccelZ;
    
    OMD4_API FRSTReplicatedAcceleration();
};

