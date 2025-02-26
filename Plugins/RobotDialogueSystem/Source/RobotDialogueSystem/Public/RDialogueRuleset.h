#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "RDialogueFactValue.h"
#include "RDialogueRuleList.h"
#include "RDialogueRuleset.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API URDialogueRuleset : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRDialogueRuleList> Rules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRDialogueFactValue> Facts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTagContainer> GameplayTags;
    
public:
    URDialogueRuleset();

};

