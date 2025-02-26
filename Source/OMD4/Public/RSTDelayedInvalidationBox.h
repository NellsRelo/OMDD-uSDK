#pragma once
#include "CoreMinimal.h"
#include "Components/InvalidationBox.h"
#include "RSTDelayedInvalidationBox.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTDelayedInvalidationBox : public UInvalidationBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
public:
    URSTDelayedInvalidationBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeElapsed();
    
};

