#include "RSTGibSkeletal.h"
#include "Components/SkeletalMeshComponent.h"
#include "NiagaraComponent.h"

ARSTGibSkeletal::ARSTGibSkeletal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->FXMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FX Mesh"));
    this->NSBlood = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NSBlood"));
    this->FXMesh->SetupAttachment(RootComponent);
    this->NSBlood->SetupAttachment(RootComponent);
}


