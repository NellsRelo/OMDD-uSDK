#pragma once
#include "CoreMinimal.h"
#include "VertexAnimationMaterialRef.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct VERTEXANIMATIONMANAGER_API FVertexAnimationMaterialRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Instance;
    
    FVertexAnimationMaterialRef();
};

