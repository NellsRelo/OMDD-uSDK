#pragma once
#include "CoreMinimal.h"
#include "RSTNewCloneData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct OMD4_API FRSTNewCloneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachParent;
    
    FRSTNewCloneData();
};

