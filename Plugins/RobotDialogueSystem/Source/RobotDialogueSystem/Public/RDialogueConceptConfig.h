#pragma once
#include "CoreMinimal.h"
#include "RDialogueFactValueConfig.h"
#include "RDialogueConceptConfig.generated.h"

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueConceptConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRDialogueFactValueConfig> Facts;
    
    FRDialogueConceptConfig();
};

