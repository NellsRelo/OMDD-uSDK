#pragma once
#include "CoreMinimal.h"
#include "VertexAnimationAxisSelection.h"
#include "VertexAnimationTransformSelection.generated.h"

USTRUCT(BlueprintType)
struct FVertexAnimationTransformSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexAnimationAxisSelection Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVertexAnimationAxisSelection Rotation;
    
    VERTEXANIMATIONMANAGER_API FVertexAnimationTransformSelection();
};

