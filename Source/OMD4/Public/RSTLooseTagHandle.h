#pragma once
#include "CoreMinimal.h"
#include "RSTLooseTagHandle.generated.h"

class URSTAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FRSTLooseTagHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSTAbilitySystemComponent> OwningASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    OMD4_API FRSTLooseTagHandle();
};
FORCEINLINE uint32 GetTypeHash(const FRSTLooseTagHandle) { return 0; }

