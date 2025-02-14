#include "RSTOnslaughtComponentRiftDefense.h"

URSTOnslaughtComponentRiftDefense::URSTOnslaughtComponentRiftDefense(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RiftPoints = 20;
}

void URSTOnslaughtComponentRiftDefense::RegisterPreEnemyEnterRift(FPreEnemyEnterRift Callback) {
}

void URSTOnslaughtComponentRiftDefense::OnRiftEntered(ARSTRift* Rift, AActor* Actor, FVector RiftLocation) {
}


