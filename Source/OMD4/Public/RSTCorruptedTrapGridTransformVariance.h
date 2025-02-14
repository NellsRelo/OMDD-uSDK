#pragma once
#include "CoreMinimal.h"
#include "RSTCorruptedTrapGridTransformVariance.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTCorruptedTrapGridTransformVariance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HorizontalOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinVerticalOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxVerticalOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TiltDegrees;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpinDegrees;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinScaleVariance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxScaleVariance;
    
    FRSTCorruptedTrapGridTransformVariance();
};

