#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameplayEffect.h"
#include "RSTOnslaughtComponentRiftDefense.h"
#include "RSTOnslaughtComponentCrystalDefense.generated.h"

class AActor;
class URSTHealthComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTOnslaughtComponentCrystalDefense : public URSTOnslaughtComponentRiftDefense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPerRiftPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DifficultyHealthMultiplier;
    
public:
    URSTOnslaughtComponentCrystalDefense(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnRiftHealingTaken(URSTHealthComponent* HealthComp, float Healing, AActor* Causer, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnRiftDamageTaken(URSTHealthComponent* HealthComp, float Damage, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    
};

