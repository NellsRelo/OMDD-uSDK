#include "RSTPostGameLevelSequenceActor.h"
#include "Components/SceneComponent.h"

ARSTPostGameLevelSequenceActor::ARSTPostGameLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->CurrentSequenceActor = NULL;
}

void ARSTPostGameLevelSequenceActor::SequencePlaying() {
}

void ARSTPostGameLevelSequenceActor::SequenceFinished() {
}

void ARSTPostGameLevelSequenceActor::PlayLevelSequenceWhenReady() {
}

void ARSTPostGameLevelSequenceActor::PlayLevelSequenceDeferred(ARSTPostGameLevelSequenceActor* SequenceActor) {
}

void ARSTPostGameLevelSequenceActor::PlayLevelSequence() {
}





void ARSTPostGameLevelSequenceActor::InitPostGameSequence(bool bVictory) {
}

void ARSTPostGameLevelSequenceActor::CancelLevelSequence() {
}


