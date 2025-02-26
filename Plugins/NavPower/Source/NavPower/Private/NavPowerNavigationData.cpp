#include "NavPowerNavigationData.h"

ANavPowerNavigationData::ANavPowerNavigationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsPrimaryNavData = false;
    this->NavPowerLayerIndex = 0;
    this->NavMeshBufferSize = 0;
    this->NavVolumesBufferSize = 0;
}

void ANavPowerNavigationData::OnCheckRenderFlag() {
}


