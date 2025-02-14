#include "RSTPickup.h"
#include "Components/SphereComponent.h"

ARSTPickup::ARSTPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("GeoCollisionSphere"));
    this->GeoCollisionSphere = (USphereComponent*)RootComponent;
    this->PlayerCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerCollisionSphere"));
    this->Duration = 10.00f;
    this->PlayerCollisionSphere->SetupAttachment(RootComponent);
}

void ARSTPickup::PhysicsLaunch(FVector LaunchVector, float LaunchForce) {
}

void ARSTPickup::OnPostGame() {
}

void ARSTPickup::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



