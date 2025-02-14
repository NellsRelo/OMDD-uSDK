#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeSet.h"
#include "RSTPropertyModifierCustomLogicBase.generated.h"

class URSTModifierComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierCustomLogicBase : public UObject {
    GENERATED_BODY()
public:
    URSTPropertyModifierCustomLogicBase();

    UFUNCTION(BlueprintCallable)
    void UnregisterChangeCallbacks();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAttributeDelegate(FGameplayAttribute Attribute);
    
    UFUNCTION(BlueprintCallable)
    void RegisterChangeCallbacks();
    
    UFUNCTION(BlueprintCallable)
    void MarkPropertyDirty();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UnregisterChangeCallbacks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_RegisterChangeCallbacks();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTModifierComponent* GetOwningComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void BindAttributeDelegate(FGameplayAttribute Attribute);
    
};

