#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameplayTagContainer.h"
#include "ERSTTargetingAcquisition.h"
#include "ERSTTargetingQualifier.h"
#include "RSTTargetingRule.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTTargetingRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> RequiredAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTargetingQualifier Qualifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTargetingAcquisition Acquisition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcquisitionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatScalar;
    
    FRSTTargetingRule();
};

