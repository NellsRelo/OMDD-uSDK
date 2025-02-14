#pragma once
#include "CoreMinimal.h"
#include "RSTSpawnedAttachmentData.generated.h"

class ARSTAttachment;
class URSTAttachmentDefinition;

USTRUCT(BlueprintType)
struct FRSTSpawnedAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTAttachmentDefinition* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTAttachment* Actor;
    
    OMD4_API FRSTSpawnedAttachmentData();
};

