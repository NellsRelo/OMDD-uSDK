#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTAnimInstanceTrap_Ballista.h"
#include "RSTAnimInstanceTrap_Hookshot.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTAnimInstanceTrap_Hookshot : public URSTAnimInstanceTrap_Ballista {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsGrappling: 1;
    
public:
    URSTAnimInstanceTrap_Hookshot();

};

