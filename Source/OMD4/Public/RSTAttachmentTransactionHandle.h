#pragma once
#include "CoreMinimal.h"
#include "RSTAttachmentTransactionHandle.generated.h"

class URSTAttachmentManagerComponent;

USTRUCT(BlueprintType)
struct FRSTAttachmentTransactionHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSTAttachmentManagerComponent> OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    OMD4_API FRSTAttachmentTransactionHandle();
};

