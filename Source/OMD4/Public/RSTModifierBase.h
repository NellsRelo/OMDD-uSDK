#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERSTModifierTargetMethod.h"
#include "RSTModifierSubobjectTargetData.h"
#include "RSTModifierBase.generated.h"

class AActor;
class URSTModifierComponent;
class URSTModifierSubtargetMethod;
class URSTModifierTargetFilter;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class URSTModifierBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTemporary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTModifierTargetMethod TargetMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTModifierTargetFilter* TargetFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToSubobject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTModifierSubobjectTargetData SubobjectTargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTModifierSubtargetMethod*> SubtargetMethods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTModifierSubtargetMethod* SubtargetMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyOnSimulatedProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCDO;
    
    URSTModifierBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_RemoveModifier(UObject* Target, UObject* InContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UObject*> BP_GetTargets(URSTModifierComponent* OwningComponent, const TArray<AActor*>& TargetActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ExecuteModifier(UObject* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ApplyModifier(UObject* Target, UObject*& OutContextObject) const;
    
};

