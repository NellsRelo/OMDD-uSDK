#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AttributeSet.h"
#include "RSTSphereOverlapObjectsChangedDelegate.h"
#include "RSTSphereOverlapRadiusDelegateDelegate.h"
#include "RSTSphereOverlapTransformDelegateDelegate.h"
#include "RSTAbilityTask_SphereOverlap.generated.h"

class AActor;
class UGameplayAbility;
class URSTAbilityTask_SphereOverlap;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_SphereOverlap : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTSphereOverlapObjectsChanged OnObjectsEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTSphereOverlapObjectsChanged OnObjectsLeft;
    
    URSTAbilityTask_SphereOverlap();

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_SphereOverlap* WaitForSphereOverlap_Dynamic(UGameplayAbility* OwningAbility, float UnscaledRadius, FRSTSphereOverlapTransformDelegate StartTransformDelegate, FRSTSphereOverlapTransformDelegate EndTransformDelegate, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_SphereOverlap* WaitForSphereOverlap_Delegate_Dynamic(UGameplayAbility* OwningAbility, FRSTSphereOverlapRadiusDelegate RadiusDelegate, FRSTSphereOverlapTransformDelegate StartTransformDelegate, FRSTSphereOverlapTransformDelegate EndTransformDelegate, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_SphereOverlap* WaitForSphereOverlap_Delegate(UGameplayAbility* OwningAbility, FRSTSphereOverlapRadiusDelegate RadiusDelegate, FTransform StartTransform, FTransform EndTransform, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_SphereOverlap* WaitForSphereOverlap_AttributeRadius_Dynamic(UGameplayAbility* OwningAbility, FGameplayAttribute RadiusAttribute, FRSTSphereOverlapTransformDelegate StartTransformDelegate, FRSTSphereOverlapTransformDelegate EndTransformDelegate, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_SphereOverlap* WaitForSphereOverlap_AttributeRadius(UGameplayAbility* OwningAbility, FGameplayAttribute RadiusAttribute, FTransform StartTransform, FTransform EndTransform, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_SphereOverlap* WaitForSphereOverlap(UGameplayAbility* OwningAbility, float UnscaledRadius, FTransform StartTransform, FTransform EndTransform, FCollisionProfileName TraceProfile, const TArray<AActor*>& InitialOverlaps, const TArray<AActor*>& IgnoreActors, bool bRunTraceInstantly, float ScanRate, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetCurrentOverlaps();
    
};

