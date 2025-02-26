#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "Components/SplineComponent.h"
#include "RSTSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    URSTSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSplinePoint GetWorldSpaceSplinePointAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldSpaceSplinePoint(const FSplinePoint& SplinePoint, bool bUpdateSpline);
    
};

