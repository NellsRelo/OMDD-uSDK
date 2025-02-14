#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "NavPowerPlayerMovementComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVPOWER_API UNavPowerPlayerMovementComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RepulsorIDFlag;
    
    UNavPowerPlayerMovementComponent(const FObjectInitializer& ObjectInitializer);

};

