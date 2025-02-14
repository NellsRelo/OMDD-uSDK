#include "RSTProjectileTrail.h"
#include "NiagaraComponent.h"

ARSTProjectileTrail::ARSTProjectileTrail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TrailFX"));
    this->TrailFX = (UNiagaraComponent*)RootComponent;
}

void ARSTProjectileTrail::OnTrailFXFinished(UNiagaraComponent* PSystem) {
}

int32 ARSTProjectileTrail::GetNumTrails() {
    return 0;
}


