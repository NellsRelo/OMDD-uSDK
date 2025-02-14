#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RSTHitDataElement.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, Const, EditInlineNew)
class OMD4_API URSTHitDataElement : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    URSTHitDataElement();

};

