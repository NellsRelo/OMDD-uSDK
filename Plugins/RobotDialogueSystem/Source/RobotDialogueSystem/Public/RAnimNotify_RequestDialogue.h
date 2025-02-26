#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RDialogueConcept.h"
#include "RAnimNotify_RequestDialogue.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ROBOTDIALOGUESYSTEM_API URAnimNotify_RequestDialogue : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRDialogueConcept Concept;
    
public:
    URAnimNotify_RequestDialogue();

};

