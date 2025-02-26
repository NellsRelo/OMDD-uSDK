#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RSTAttachmentCueData.h"
#include "RSTAnimNotify_TriggerAttachmentEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAnimNotify_TriggerAttachmentEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAttachmentCueData> AttachmentEvents;
    
    URSTAnimNotify_TriggerAttachmentEvent();

};

