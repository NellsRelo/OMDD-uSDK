#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VertexAnimationPose.generated.h"

USTRUCT(BlueprintType)
struct VERTEXANIMATIONMANAGER_API FVertexAnimationPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> LocalTransforms;
    
    FVertexAnimationPose();
};

