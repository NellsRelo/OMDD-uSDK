#pragma once
#include "CoreMinimal.h"
#include "RDialogueConcept.generated.h"

USTRUCT(BlueprintType)
struct ROBOTDIALOGUESYSTEM_API FRDialogueConcept {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConceptName;
    
public:
    FRDialogueConcept();
};

