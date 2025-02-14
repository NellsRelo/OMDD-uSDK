#pragma once
#include "CoreMinimal.h"
#include "VertexAnimationLOD.generated.h"

USTRUCT(BlueprintType)
struct VERTEXANIMATIONMANAGER_API FVertexAnimationLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRateFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRateTo;
    
    FVertexAnimationLOD();
};

