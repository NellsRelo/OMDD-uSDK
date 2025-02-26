#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "RSTDynamicFoliageComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTDynamicFoliageComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    URSTDynamicFoliageComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void HandleComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

