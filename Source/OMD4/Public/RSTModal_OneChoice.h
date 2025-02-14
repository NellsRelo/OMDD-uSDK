#pragma once
#include "CoreMinimal.h"
#include "RSTModal.h"
#include "RSTModalDynamicDelegateDelegate.h"
#include "RSTModal_OneChoice.generated.h"

class URSTBoundActionButton;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTModal_OneChoice : public URSTModal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTBoundActionButton* BoundActionButton_ChoiceOne;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTModalDynamicDelegate ChoiceOneDynamicDelegate;
    
    URSTModal_OneChoice();

    UFUNCTION(BlueprintCallable)
    void OnChoiceClickedOne();
    
};

