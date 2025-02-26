#pragma once
#include "CoreMinimal.h"
#include "RSTHitDataElement.h"
#include "RSTRagdollData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTRagdollData : public URSTHitDataElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollForce;
    
    URSTRagdollData();

};

