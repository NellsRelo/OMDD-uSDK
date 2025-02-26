#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTMapDisplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTMapDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowMarker: 1;
    
public:
    URSTMapDisplayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowMarker();
    
    UFUNCTION(BlueprintCallable)
    void HideMarker();
    
};

