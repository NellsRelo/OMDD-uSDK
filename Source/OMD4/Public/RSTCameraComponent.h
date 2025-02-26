#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "RSTCameraComponent.generated.h"

class AActor;
class URSTCameraComponent;
class URSTCameraModeStack;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URSTCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTCameraModeStack* CameraModeStack;
    
public:
    URSTCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTCameraComponent* FindCameraComponent(const AActor* Actor);
    
};

