#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RDialogueConcept.h"
#include "RDialogueFactValue.h"
#include "RDialogueQuery.h"
#include "RDialogueBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class ROBOTDIALOGUESYSTEM_API URDialogueBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URDialogueBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRDialogueFactValue MakeStringFact(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static FRDialogueFactValue MakeIntegerFact(int64 Value);
    
    UFUNCTION(BlueprintPure)
    static FRDialogueFactValue MakeFloatFact(double Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRDialogueQuery MakeDialogueQuery(FRDialogueConcept ConceptName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRDialogueFactValue MakeBooleanFact(bool Value);
    
    UFUNCTION(BlueprintCallable)
    static FRDialogueQuery AddValueFactToQuery(FRDialogueQuery Query, FName FactName, FRDialogueFactValue FactValue);
    
    UFUNCTION(BlueprintCallable)
    static FRDialogueQuery AddGameplayTagFactToQuery(FRDialogueQuery Query, FName FactName, FGameplayTagContainer GameplayTags);
    
};

