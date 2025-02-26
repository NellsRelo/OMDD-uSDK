#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPropertyOperationValidityCheck.h"
#include "RSTPropertyOperationValidityCheck_GameplayTags.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTPropertyOperationValidityCheck_GameplayTags : public URSTPropertyOperationValidityCheck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    URSTPropertyOperationValidityCheck_GameplayTags();

};

