#pragma once
#include "CoreMinimal.h"
#include "Components/ControllerComponent.h"
#include "RSTNameplateManagerComponent.generated.h"

class AActor;
class URSTIndicatorDescriptor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTNameplateManagerComponent : public UControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, URSTIndicatorDescriptor*> IndicatorMap;
    
public:
    URSTNameplateManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void DestroyForProxies();
    
};

