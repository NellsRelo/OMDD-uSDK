#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotifyTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTPlayerAttachmentEventType.h"
#include "RSTAttachmentCueData.generated.h"

USTRUCT(BlueprintType)
struct FRSTAttachmentCueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTPlayerAttachmentEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_ParticleInfo> Particles;
    
    OMD4_API FRSTAttachmentCueData();
};

