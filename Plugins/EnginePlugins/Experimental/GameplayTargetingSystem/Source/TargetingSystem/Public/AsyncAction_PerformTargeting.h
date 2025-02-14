#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PerformTargetingReadyDelegate.h"
#include "TargetingRequestHandle.h"
#include "AsyncAction_PerformTargeting.generated.h"

class AActor;
class UAsyncAction_PerformTargeting;
class UTargetingPreset;

UCLASS(Blueprintable)
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerformTargetingReady Targeted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTargetingPreset* TargetingPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> WeakSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InitialTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetingRequestHandle TargetingHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAsyncTargeting: 1;
    
public:
    UAsyncAction_PerformTargeting();

    UFUNCTION(BlueprintCallable)
    static UAsyncAction_PerformTargeting* PerformTargetingRequest(AActor* SourceActor, UTargetingPreset* NewTargetingPreset, bool NewBUseAsyncTargeting);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_PerformTargeting* PerformFilteringRequest(AActor* SourceActor, UTargetingPreset* NewTargetingPreset, bool NewBUseAsyncTargeting, const TArray<AActor*> InTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTargetingRequestHandle GetTargetingHandle() const;
    
};

