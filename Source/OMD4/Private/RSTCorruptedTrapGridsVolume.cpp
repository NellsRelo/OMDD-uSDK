#include "RSTCorruptedTrapGridsVolume.h"
#include "Components/DynamicMeshComponent.h"
#include "Net/UnrealNetwork.h"

ARSTCorruptedTrapGridsVolume::ARSTCorruptedTrapGridsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DynamicMeshComponent = CreateDefaultSubobject<UDynamicMeshComponent>(TEXT("DynamicMesh"));
    this->GroupID = 0;
    this->bIsEnabled = true;
    this->DynamicMeshComponent->SetupAttachment(RootComponent);
}

void ARSTCorruptedTrapGridsVolume::SetIsEnabled(bool bInIsEnabled) {
}

void ARSTCorruptedTrapGridsVolume::RegenerateVisuals() {
}

void ARSTCorruptedTrapGridsVolume::OnRep_IsEnabled() {
}

void ARSTCorruptedTrapGridsVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTCorruptedTrapGridsVolume, bIsEnabled);
}


