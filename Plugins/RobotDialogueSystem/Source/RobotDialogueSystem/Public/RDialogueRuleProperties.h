#pragma once
#include "CoreMinimal.h"
#include "ERDialogueRuleAudience.h"
#include "ERDialogueRulePriority.h"
#include "RDialogueRuleProperties.generated.h"

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueRuleProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERDialogueRuleAudience Audience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERDialogueRulePriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FRDialogueRuleProperties();
};

