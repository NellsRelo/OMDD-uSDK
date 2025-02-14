#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DeathTypeOutputPinDelegate.h"
#include "RSTDeathTypeSwitch.generated.h"

class URSTDeathTypeSwitch;

UCLASS(Blueprintable)
class OMD4_API URSTDeathTypeSwitch : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin NoType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin Ragdoll;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin Gib;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin CustomAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin EnteredRift;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathTypeOutputPin Pulled;
    
    URSTDeathTypeSwitch();

    UFUNCTION(BlueprintCallable)
    static URSTDeathTypeSwitch* SwitchOnDeathType(const uint8 deathTypeMask);
    
};

