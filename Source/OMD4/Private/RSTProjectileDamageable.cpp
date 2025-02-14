#include "RSTProjectileDamageable.h"
#include "RSTAbilitySystemComponent.h"
#include "RSTHealthComponent.h"

ARSTProjectileDamageable::ARSTProjectileDamageable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<URSTHealthComponent>(TEXT("HealthComponent"));
    this->AbilitySystemComponent = CreateDefaultSubobject<URSTAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->MaxHealth = 0.00f;
}

void ARSTProjectileDamageable::OnDeathStarted(AActor* OwningActor, const AActor* InInstigator) {
}

void ARSTProjectileDamageable::OnDeathFinished(AActor* OwningActor, const AActor* InInstigator) {
}

URSTAbilitySystemComponent* ARSTProjectileDamageable::GetRSTAbilitySystemComponent() const {
    return NULL;
}

UAbilitySystemComponent* ARSTProjectileDamageable::GetOwnerAbilitySystemComponent() const {
    return NULL;
}


