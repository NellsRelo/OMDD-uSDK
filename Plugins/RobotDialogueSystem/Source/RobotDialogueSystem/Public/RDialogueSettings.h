#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RDialogueConceptConfig.h"
#include "RDialogueFactValueConfig.h"
#include "RDialogueSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Dialogue)
class ROBOTDIALOGUESYSTEM_API URDialogueSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRDialogueConceptConfig> Concepts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRDialogueFactValueConfig> GlobalFacts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRequestRadius;
    
    URDialogueSettings();

};

