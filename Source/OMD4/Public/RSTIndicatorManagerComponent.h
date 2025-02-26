#pragma once
#include "CoreMinimal.h"
#include "Components/ControllerComponent.h"
#include "RSTIndicatorManagerComponent.generated.h"

class URSTIndicatorDescriptor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTIndicatorManagerComponent : public UControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTIndicatorDescriptor*> Indicators;
    
public:
    URSTIndicatorManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveIndicator(URSTIndicatorDescriptor* IndicatorDescriptor);
    
    UFUNCTION(BlueprintCallable)
    void AddIndicator(URSTIndicatorDescriptor* IndicatorDescriptor);
    
};

