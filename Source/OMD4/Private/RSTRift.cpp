#include "RSTRift.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "RSTAbilitySystemComponent.h"
#include "RSTDamageModifierComponent.h"
#include "RSTMapDisplayComponent.h"
#include "RSTModifierComponent.h"

ARSTRift::ARSTRift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bCanBePrimary = true;
    this->RiftInfluenceRadius = 500.00f;
    this->RiftLightningRadius = 500.00f;
    this->RiftLightningRefireMin = 5.00f;
    this->RiftLightningRefireMax = 5.00f;
    this->RiftEnterArea = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RiftEnterArea"));
    this->MapDisplayComponent = CreateDefaultSubobject<URSTMapDisplayComponent>(TEXT("MapDisplay"));
    this->AbilitySystemComponent = CreateDefaultSubobject<URSTAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->ModifierComponent = CreateDefaultSubobject<URSTModifierComponent>(TEXT("ModifierComponent"));
    this->DamageModifierComponent = CreateDefaultSubobject<URSTDamageModifierComponent>(TEXT("DamageModifierComponent"));
    this->RiftEnterArea->SetupAttachment(RootComponent);
}

void ARSTRift::RiftEnterBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

FTransform ARSTRift::GetRiftTeleportTransform() const {
    return FTransform{};
}






