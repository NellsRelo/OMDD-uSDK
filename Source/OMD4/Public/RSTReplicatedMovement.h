#pragma once
#include "CoreMinimal.h"
#include "RSTReplicatedMovement.generated.h"

USTRUCT(BlueprintType)
struct FRSTReplicatedMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuspendedInAir;
    
    OMD4_API FRSTReplicatedMovement();
};

