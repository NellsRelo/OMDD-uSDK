#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityPlaceable.h"
#include "RSTActiveSubobject.h"
#include "RSTMinirift.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTMinirift : public ARSTActiveSubobject/*, public IRSTAbilityPlaceable*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    ARSTMinirift(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

