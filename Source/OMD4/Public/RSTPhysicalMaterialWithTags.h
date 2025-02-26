#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "RSTPhysicalMaterialWithTags.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class URSTPhysicalMaterialWithTags : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    URSTPhysicalMaterialWithTags();

};

