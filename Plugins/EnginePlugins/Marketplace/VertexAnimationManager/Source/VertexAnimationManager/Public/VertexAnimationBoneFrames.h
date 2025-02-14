#pragma once
#include "CoreMinimal.h"
#include "VertexAnimationTransform.h"
#include "VertexAnimationBoneFrames.generated.h"

USTRUCT(BlueprintType)
struct VERTEXANIMATIONMANAGER_API FVertexAnimationBoneFrames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexAnimationTransform> Frame;
    
    FVertexAnimationBoneFrames();
};

