#pragma once
#include "CoreMinimal.h"
#include "RSTHitDataElement.h"
#include "RSTDamageImmunityData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTDamageImmunityData : public URSTHitDataElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageImmunityDuration;
    
    URSTDamageImmunityData();

};

