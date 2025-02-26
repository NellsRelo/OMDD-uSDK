#include "RSTDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "RSTAbilitySystemComponent.h"
#include "RSTAttackLocationsComponent.h"
#include "RSTHealthComponent.h"
#include "RSTMapDisplayComponent.h"
#include "RSTObstructionComponent.h"

ARSTDoor::ARSTDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bIsOpen = false;
    this->bIsDisplayingHealthBar = false;
    this->ThresholdBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ThresholdBox"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    this->HealthComponent = CreateDefaultSubobject<URSTHealthComponent>(TEXT("HealthComponent"));
    this->AttackLocsComponent = CreateDefaultSubobject<URSTAttackLocationsComponent>(TEXT("RSTAttackLocations"));
    this->MaxHealth = 0.00f;
    this->bShowHPBar = true;
    this->ThreatValue = 200.00f;
    this->bIsExpectingMobs = false;
    this->MapDisplayComponent = CreateDefaultSubobject<URSTMapDisplayComponent>(TEXT("MapDisplay"));
    this->AbilitySystemComponent = CreateDefaultSubobject<URSTAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->NavAndCollisionComponent = CreateDefaultSubobject<URSTObstructionComponent>(TEXT("RSTObstruction"));
    this->AttackLocsComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->NavAndCollisionComponent->SetupAttachment(RootComponent);
    this->ThresholdBox->SetupAttachment(RootComponent);
}

void ARSTDoor::UpdateNearbyPlayers() {
}

void ARSTDoor::OpenDoor() {
}

void ARSTDoor::OnRep_UpdateHealthbar() {
}

void ARSTDoor::OnRep_IsOpen() {
}

void ARSTDoor::OnRep_IsExpectingMobs() {
}

void ARSTDoor::OnDeathStarted(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTDoor::OnDeathFinished(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTDoor::OnDamageTaken(URSTHealthComponent* InHealthComponent, float Damage, AActor* InInstigator, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec) {
}

void ARSTDoor::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

URSTAbilitySystemComponent* ARSTDoor::GetRSTAbilitySystemComponent() const {
    return NULL;
}

URSTHealthComponent* ARSTDoor::GetHealthComponent() const {
    return NULL;
}


void ARSTDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARSTDoor, bIsOpen);
    DOREPLIFETIME(ARSTDoor, bIsDisplayingHealthBar);
    DOREPLIFETIME(ARSTDoor, bIsExpectingMobs);
}


