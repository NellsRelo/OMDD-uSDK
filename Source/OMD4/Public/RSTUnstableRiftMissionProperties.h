#pragma once
#include "CoreMinimal.h"
#include "RSTUnstableRiftMissionProperties.generated.h"

class URSTMetaDistortionDefinition;

USTRUCT(BlueprintType)
struct OMD4_API FRSTUnstableRiftMissionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTMetaDistortionDefinition* UnstableRiftDistortion;
    
    FRSTUnstableRiftMissionProperties();
};

