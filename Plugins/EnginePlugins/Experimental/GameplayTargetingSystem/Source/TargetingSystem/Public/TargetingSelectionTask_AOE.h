#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "ETargetingAOEShape.h"
#include "TargetingRequestHandle.h"
#include "TargetingTask.h"
#include "TargetingSelectionTask_AOE.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TARGETINGSYSTEM_API UTargetingSelectionTask_AOE : public UTargetingTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetingAOEShape ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> CollisionObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultSourceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseRelativeOffset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreSourceActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreInstigatorActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
public:
    UTargetingSelectionTask_AOE();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FQuat GetSourceRotation(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSourceOffset(const FTargetingRequestHandle& TargetingHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSourceLocation(const FTargetingRequestHandle& TargetingHandle) const;
    
};

