#pragma once
#include "CoreMinimal.h"
#include "AimAssistTargetData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FAimAssistTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double UpdateTimestamp;
    
    OMD4_API FAimAssistTargetData();
};

