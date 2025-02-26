#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTUICameraManagerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, Transient, ClassGroup=Custom, Within=RSTPlayerCameraManager, meta=(BlueprintSpawnableComponent))
class URSTUICameraManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdatingViewTarget;
    
public:
    URSTUICameraManagerComponent(const FObjectInitializer& ObjectInitializer);

};

