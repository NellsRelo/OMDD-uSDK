#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/HitResult.h"
#include "CollisionQueryTaskData.h"
#include "TargetingRequestDynamicDelegateDelegate.h"
#include "TargetingRequestHandle.h"
#include "TargetingSourceContext.h"
#include "TargetingSubsystem.generated.h"

class AActor;
class UTargetingPreset;

UCLASS(Blueprintable, MinimalAPI)
class UTargetingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTargetingRequestHandle> AsyncTargetingRequests;
    
public:
    UTargetingSubsystem();

    UFUNCTION(BlueprintCallable)
    FTargetingRequestHandle StartAsyncTargetingRequest(const UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FTargetingRequestDynamicDelegate CompletionDynamicDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAsyncTargetingRequestWithHandle(FTargetingRequestHandle& TargetingHandle);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideCollisionQueryTaskData(FTargetingRequestHandle TargetingHandle, const FCollisionQueryTaskData& CollisionQueryDataOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTargetingSourceContext GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray<AActor*>& Targets) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetingResults(FTargetingRequestHandle TargetingHandle, TArray<FHitResult>& OutTargets) const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteTargetingRequest(const UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FTargetingRequestDynamicDelegate CompletionDynamicDelegate);
    
};

