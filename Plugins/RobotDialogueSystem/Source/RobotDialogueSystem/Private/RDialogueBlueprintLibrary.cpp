#include "RDialogueBlueprintLibrary.h"

URDialogueBlueprintLibrary::URDialogueBlueprintLibrary() {
}

FRDialogueFactValue URDialogueBlueprintLibrary::MakeStringFact(const FString& Value) {
    return FRDialogueFactValue{};
}

FRDialogueFactValue URDialogueBlueprintLibrary::MakeIntegerFact(int64 Value) {
    return FRDialogueFactValue{};
}

FRDialogueFactValue URDialogueBlueprintLibrary::MakeFloatFact(double Value) {
    return FRDialogueFactValue{};
}

FRDialogueQuery URDialogueBlueprintLibrary::MakeDialogueQuery(FRDialogueConcept ConceptName) {
    return FRDialogueQuery{};
}

FRDialogueFactValue URDialogueBlueprintLibrary::MakeBooleanFact(bool Value) {
    return FRDialogueFactValue{};
}

FRDialogueQuery URDialogueBlueprintLibrary::AddValueFactToQuery(FRDialogueQuery Query, FName FactName, FRDialogueFactValue FactValue) {
    return FRDialogueQuery{};
}

FRDialogueQuery URDialogueBlueprintLibrary::AddGameplayTagFactToQuery(FRDialogueQuery Query, FName FactName, FGameplayTagContainer GameplayTags) {
    return FRDialogueQuery{};
}


