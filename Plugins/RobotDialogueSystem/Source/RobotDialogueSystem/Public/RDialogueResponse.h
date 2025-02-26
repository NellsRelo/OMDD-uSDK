#pragma once
#include "CoreMinimal.h"
#include "RDialogueResponse.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FollowUpConcept;
    
    FRDialogueResponse();
};

