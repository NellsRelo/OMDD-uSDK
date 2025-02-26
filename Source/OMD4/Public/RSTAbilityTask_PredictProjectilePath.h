#pragma once
#include "CoreMinimal.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "RSTProjectilePathDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "RSTAbilityTask_PredictProjectilePath.generated.h"

class AActor;
class ARSTProjectile;
class UFXSystemAsset;
class UFXSystemComponent;
class UGameplayAbility;
class URSTAbilityTask_PredictProjectilePath;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_PredictProjectilePath : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> HitIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemComponent*> SpawnedPathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* HitIndicator;
    
public:
    URSTAbilityTask_PredictProjectilePath();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_PredictProjectilePath* PredictProjectilePath_TraceChannel(UGameplayAbility* OwningAbility, UFXSystemAsset* NewParticleSystem, TSubclassOf<AActor> NewHitIndicatorClass, TSubclassOf<ARSTProjectile> NewProjectileClass, float ProjectileRadius, bool bOverrideProjectileGravity, float ProjectileGravity, bool bIgnoreSelf, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ECollisionChannel> TraceChannel, FRSTProjectilePathDelegate LocationDelegate, FRSTProjectilePathDelegate VelocityDelegate, float HitIndicatorScale, float OverrideGravityZ, bool bTraceComplex, float DrawDebugTime, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float MaxSimTime, float SimFrequency);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_PredictProjectilePath* PredictProjectilePath_Profile(UGameplayAbility* OwningAbility, UFXSystemAsset* NewParticleSystem, TSubclassOf<AActor> NewHitIndicatorClass, TSubclassOf<ARSTProjectile> NewProjectileClass, float ProjectileRadius, bool bOverrideProjectileGravity, float ProjectileGravity, bool bIgnoreSelf, TArray<AActor*> ActorsToIgnore, FCollisionProfileName TraceProfile, FRSTProjectilePathDelegate LocationDelegate, FRSTProjectilePathDelegate VelocityDelegate, float HitIndicatorScale, float OverrideGravityZ, bool bTraceComplex, float DrawDebugTime, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float MaxSimTime, float SimFrequency);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_PredictProjectilePath* PredictProjectilePath_ObjectChannel(UGameplayAbility* OwningAbility, UFXSystemAsset* NewParticleSystem, TSubclassOf<AActor> NewHitIndicatorClass, TSubclassOf<ARSTProjectile> NewProjectileClass, float ProjectileRadius, bool bOverrideProjectileGravity, float ProjectileGravity, bool bIgnoreSelf, TArray<AActor*> ActorsToIgnore, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, FRSTProjectilePathDelegate LocationDelegate, FRSTProjectilePathDelegate VelocityDelegate, float HitIndicatorScale, float OverrideGravityZ, bool bTraceComplex, float DrawDebugTime, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float MaxSimTime, float SimFrequency);
    
};

