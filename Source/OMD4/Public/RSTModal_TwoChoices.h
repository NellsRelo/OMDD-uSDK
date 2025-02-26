#pragma once
#include "CoreMinimal.h"
#include "RSTModal.h"
#include "RSTModalDynamicDelegateDelegate.h"
#include "RSTModal_TwoChoices.generated.h"

class URSTBoundActionButton;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTModal_TwoChoices : public URSTModal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTBoundActionButton* BoundActionButton_ChoiceOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTBoundActionButton* BoundActionButton_ChoiceTwo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTModalDynamicDelegate ChoiceOneDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTModalDynamicDelegate ChoiceTwoDynamicDelegate;
    
    URSTModal_TwoChoices();

    UFUNCTION(BlueprintCallable)
    void OnChoiceClickedTwo();
    
    UFUNCTION(BlueprintCallable)
    void OnChoiceClickedOne();
    
};

