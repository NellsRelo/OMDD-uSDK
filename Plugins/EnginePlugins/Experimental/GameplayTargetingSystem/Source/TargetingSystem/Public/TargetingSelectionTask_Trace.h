#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "ETargetingTraceType.h"
#include "TargetingRequestHandle.h"
#include "TargetingTask.h"
#include "TargetingSelectionTask_Trace.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class TARGETINGSYSTEM_API UTargetingSelectionTask_Trace : public UTargetingTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetingTraceType TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultSweptTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultSourceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ExplicitTraceDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bComplexTrace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreSourceActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreInstigatorActor: 1;
    
public:
    UTargetingSelectionTask_Trace();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTraceLength(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTraceDirection(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSweptTraceRadius(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSourceOffset(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSourceLocation(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAdditionalActorsToIgnore(const FTargetingRequestHandle& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore) const;
    
};

