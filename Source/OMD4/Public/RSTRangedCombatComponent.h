#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/CollisionProfile.h"
#include "GameplayTagContainer.h"
#include "ERSTRangedAimCollisionResolutionMethod.h"
#include "ERSTRangedFireGroupTargetingMethod.h"
#include "RSTBloomData.h"
#include "RSTFiringParams.h"
#include "RSTRangedFirePointReplicatedData.h"
#include "RSTRangedCombatComponent.generated.h"

class AActor;
class URSTRangedCombatComponent;
class URSTRangedFirePointComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTRangedCombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipTargetingTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, ERSTRangedAimCollisionResolutionMethod> FirePointCollisionResolutionOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTRangedAimCollisionResolutionMethod DefaultCollisionResolutionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName TargetingCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCollisionProfileName> FirePointTargetingProfileOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName DefaultObstructionTraceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTraceAccuracyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTraceAccuracyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> DefaultTraceRangeAccuracies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> DefaultGroupTargetInterpolationSpeeds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolateTargetByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTargetInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEditTargetingGroupRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetingGroupRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBloomAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientFirePointData, meta=(AllowPrivateAccess=true))
    TArray<FRSTRangedFirePointReplicatedData> ReplicatedFirePointData;
    
public:
    URSTRangedCombatComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterFirePoint(URSTRangedFirePointComponent* FirePoint);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBloomValues(FGameplayTag Identifier);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBloomBlend(FGameplayTag Identifier, FGameplayTag Source);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFirePoint(URSTRangedFirePointComponent* FirePoint);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterBloomValues(FGameplayTag Identifier, FRSTBloomData Data);
    
    UFUNCTION(BlueprintCallable)
    void PurgeExpiredBloomBlends(FGameplayTag Identifier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientFirePointData(const TArray<FRSTRangedFirePointReplicatedData>& PreviousData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirePointObstructed(const FGameplayTag& Identifier, bool& bOutObstructed, float ObstructionDistanceMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTargetPoint(const FGameplayTag& Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFirePoint(const FGameplayTag& Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBloomData(FGameplayTag Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetPointsForTag(const FGameplayTag& Identifier, TArray<FVector>& OutTargetPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRawBloomValues(FGameplayTag Identifier, float& OutHorizontalAngle, float& OutVerticalAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRawBloomOffset(FGameplayTag Identifier, float& OutHorizontalOffset, float& OutVerticalOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrimaryTargetTraceHitNormal(const FGameplayTag& Identifier, FVector& OutTraceNormal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrimaryTargetPointForTag(const FGameplayTag& Identifier, FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrimaryFirePointForTag(const FGameplayTag& Identifier, FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTRangedFirePointComponent* GetPrimaryFirePointComponent(const FGameplayTag& Identifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFireVectorsForTag(const FGameplayTag& Identifier, TArray<FRSTFiringParams>& OutFireVectors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFirePointsForTag(const FGameplayTag& Identifier, TArray<FVector>& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFirePointComponentsForTag(const FGameplayTag& Identifer, TArray<USceneComponent*>& OutFirePointComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBloomValues(FGameplayTag Identifier, float& OutHorizontalAngle, float& OutVerticalAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBloomOffset(FGameplayTag Identifier, float& OutHorizontalOffset, float& OutVerticalOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBloomMin(FGameplayTag Identifier, float& OutHorizontalAngle, float& OutVerticalAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBloomMax(FGameplayTag Identifier, float& OutHorizontalAngle, float& OutVerticalAngle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTRangedCombatComponent* FindRangedCombatComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EnableRangedTargeting(const FGameplayTag& GroupTag, ERSTRangedFireGroupTargetingMethod TargetingMethod, bool bHasRangeOverride, float RangeOverride, ERSTRangedAimCollisionResolutionMethod OverrideCollisionResolutionMethod, bool bInterpAim, bool bOverrideInterpSpeed, float OverrideInterpSpeed, bool bHasOverrideTargetingProfile, FCollisionProfileName OverrideTargetingProfile);
    
    UFUNCTION(BlueprintCallable)
    void DisableRangedTargeting(const FGameplayTag& GroupTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearBloomBlends(FGameplayTag Identifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ApplyOffset(FGameplayTag Identifier, FVector& InOutDirection);
    
    UFUNCTION(BlueprintCallable)
    void ApplyBloomBlend(FGameplayTag Identifier, FGameplayTag Source, float Duration, float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ApplyBloom(FGameplayTag Identifier, FVector& InOutDirection, int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    void AddBloomIncrement(FGameplayTag Identifier, float IncrementPercentage);
    
};

