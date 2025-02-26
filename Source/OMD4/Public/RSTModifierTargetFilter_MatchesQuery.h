#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTModifierTargetFilter.h"
#include "RSTModifierTargetFilter_MatchesQuery.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTModifierTargetFilter_MatchesQuery : public URSTModifierTargetFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;
    
    URSTModifierTargetFilter_MatchesQuery();

};

