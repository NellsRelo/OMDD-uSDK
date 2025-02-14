#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTActiveSubobjectData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct OMD4_API FRSTActiveSubobjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AttachRelativeTransform;
    
    FRSTActiveSubobjectData();
};

