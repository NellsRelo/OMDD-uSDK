#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "RSTCharacterGroundInfo.generated.h"

USTRUCT(BlueprintType)
struct FRSTCharacterGroundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult GroundHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundDistance;
    
    OMD4_API FRSTCharacterGroundInfo();
};

