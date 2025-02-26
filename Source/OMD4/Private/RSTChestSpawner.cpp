#include "RSTChestSpawner.h"
#include "RSTChest.h"

ARSTChestSpawner::ARSTChestSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChestClass = ARSTChest::StaticClass();
}


