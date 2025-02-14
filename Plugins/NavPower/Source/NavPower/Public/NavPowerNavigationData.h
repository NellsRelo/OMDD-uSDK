#pragma once
#include "CoreMinimal.h"
#include "NavigationData.h"
#include "NavPowerNavigationData.generated.h"

UCLASS(Blueprintable, NotPlaceable, Config=NavPower)
class NAVPOWER_API ANavPowerNavigationData : public ANavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPrimaryNavData: 1;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NavPowerLayerIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NavMeshBufferSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NavVolumesBufferSize;
    
    ANavPowerNavigationData(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCheckRenderFlag();
    
};

