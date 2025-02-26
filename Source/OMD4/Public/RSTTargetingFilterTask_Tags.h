#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Tasks/TargetingFilterTask_BasicFilterTemplate.h"
#include "RSTTargetingFilterTask_Tags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTTargetingFilterTask_Tags : public UTargetingFilterTask_BasicFilterTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    // URSTTargetingFilterTask_Tags();

};

