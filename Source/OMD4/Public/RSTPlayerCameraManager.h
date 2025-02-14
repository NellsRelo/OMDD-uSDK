#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "RSTPlayerCameraManager.generated.h"

class URSTUICameraManagerComponent;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ARSTPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URSTUICameraManagerComponent* UICamera;
    
public:
    ARSTPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

