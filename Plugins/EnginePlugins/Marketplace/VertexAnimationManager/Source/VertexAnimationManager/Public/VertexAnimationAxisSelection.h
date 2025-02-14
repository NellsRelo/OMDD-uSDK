#pragma once
#include "CoreMinimal.h"
#include "VertexAnimationAxisSelection.generated.h"

USTRUCT(BlueprintType)
struct FVertexAnimationAxisSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Z;
    
    VERTEXANIMATIONMANAGER_API FVertexAnimationAxisSelection();
};

