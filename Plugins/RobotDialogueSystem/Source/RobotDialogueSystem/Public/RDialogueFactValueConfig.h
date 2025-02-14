#pragma once
#include "CoreMinimal.h"
#include "RDialogueFactValueConfig.generated.h"

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueFactValueConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FRDialogueFactValueConfig();
};

