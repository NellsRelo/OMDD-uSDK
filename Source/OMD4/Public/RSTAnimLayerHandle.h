#pragma once
#include "CoreMinimal.h"
#include "RSTAnimLayerHandle.generated.h"

class URSTAnimLayerManagerComponent;

USTRUCT(BlueprintType)
struct FRSTAnimLayerHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSTAnimLayerManagerComponent> OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    OMD4_API FRSTAnimLayerHandle();
};
FORCEINLINE uint32 GetTypeHash(const FRSTAnimLayerHandle) { return 0; }

