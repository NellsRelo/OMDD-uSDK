#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "GameplayTagContainer.h"
#include "RSTAttachmentAnimMetaData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAttachmentAnimMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ShowGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreGroups;
    
    URSTAttachmentAnimMetaData();

};

