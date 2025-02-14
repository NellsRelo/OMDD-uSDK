#include "RDialogueComponent.h"

URDialogueComponent::URDialogueComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Ruleset = NULL;
    this->AudioComponent = NULL;
}

void URDialogueComponent::SetDialogueRuleset(URDialogueRuleset* InDialogueRuleset) {
}

void URDialogueComponent::Server_PlayResponse_Implementation(FName ConceptName, FGuid RuleId, int32 ResponseIndex) {
}

void URDialogueComponent::RequestDialogueFromOtherComponent(const FRDialogueQuery& Query, URDialogueComponent* OtherComponent, bool bReplicated) {
}

void URDialogueComponent::RequestDialogue(const FRDialogueQuery& Query, bool bReplicated) {
}

void URDialogueComponent::NetMulticast_PlayResponse_Implementation(FName ConceptName, FGuid RuleId, int32 ResponseIndex) {
}

URDialogueComponent* URDialogueComponent::FindDialogueComponent(AActor* Actor) {
    return NULL;
}

void URDialogueComponent::Client_PlayResponse_Implementation(FName ConceptName, FGuid RuleId, int32 ResponseIndex) {
}


