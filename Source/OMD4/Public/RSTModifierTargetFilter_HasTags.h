#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTModifierTargetFilter.h"
#include "RSTModifierTargetFilter_HasTags.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTModifierTargetFilter_HasTags : public URSTModifierTargetFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAll;
    
    URSTModifierTargetFilter_HasTags();

};

