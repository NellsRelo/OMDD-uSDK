#pragma once
#include "CoreMinimal.h"
#include "Components/ControllerComponent.h"
#include "RSTDamageFlyoffRequest.h"
#include "RSTHealingFlyoffRequest.h"
#include "Templates/SubclassOf.h"
#include "RSTFlyoffComponent.generated.h"

class ARSTFlyoff;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTFlyoffComponent : public UControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTFlyoff> DamageFlyoffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARSTFlyoff> HealingFlyoffClass;
    
public:
    URSTFlyoffComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestHealingFlyoff(const FRSTHealingFlyoffRequest& NewRequest);
    
    UFUNCTION(BlueprintCallable)
    void RequestDamageFlyoff(const FRSTDamageFlyoffRequest& NewRequest);
    
};

