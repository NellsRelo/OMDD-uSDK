#pragma once
#include "CoreMinimal.h"
#include "RSTModal.h"
#include "RSTTextModalDynamicDelegateDelegate.h"
#include "RSTModal_TextPrompt.generated.h"

class UEditableTextBox;
class URSTBoundActionButton;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTModal_TextPrompt : public URSTModal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* TextBox_Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTBoundActionButton* BoundActionButton_ChoiceOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTBoundActionButton* BoundActionButton_ChoiceTwo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTextModalDynamicDelegate ChoiceOneDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTextModalDynamicDelegate ChoiceTwoDynamicDelegate;
    
    URSTModal_TextPrompt();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsPasswordField(bool bInIsPasswordField);
    
    UFUNCTION(BlueprintCallable)
    void OnTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void OnChoiceClickedTwo();
    
    UFUNCTION(BlueprintCallable)
    void OnChoiceClickedOne();
    
};

