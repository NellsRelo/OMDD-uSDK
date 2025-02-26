#pragma once
#include "CoreMinimal.h"
#include "RSTActorOpacityHandle.generated.h"

class URSTActorOpacityComponent;

USTRUCT(BlueprintType)
struct FRSTActorOpacityHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSTActorOpacityComponent> OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    OMD4_API FRSTActorOpacityHandle();
};

