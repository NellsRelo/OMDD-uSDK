#pragma once
#include "CoreMinimal.h"
#include "RSTModal.h"
#include "RSTModalDynamicDelegateDelegate.h"
#include "RSTModal_KeyMapping.generated.h"

class UInputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTModal_KeyMapping : public URSTModal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputKeySelector* KeySelector;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTModalDynamicDelegate KeyMappedDynamicDelegate;
    
    URSTModal_KeyMapping();

    UFUNCTION(BlueprintCallable)
    void OnKeyMapped();
    
};

