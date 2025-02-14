#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayAbility_TrapBase.h"
#include "Templates/SubclassOf.h"
#include "RSTGameplayAbility_RangedTrap.generated.h"

class ARSTProjectile;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_RangedTrap : public URSTGameplayAbility_TrapBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProjectileHitGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxProjectileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PierceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PiercePropertyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BounceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseMaxProjectileSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideProjectileGravityScale;
    
public:
    URSTGameplayAbility_RangedTrap();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectileGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ARSTProjectile> GetProjectileClass() const;
    
    UFUNCTION(BlueprintCallable)
    ARSTProjectile* FireProjectileWithTransform(const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    ARSTProjectile* FireProjectile(FVector Location, FVector Direction);
    
};

