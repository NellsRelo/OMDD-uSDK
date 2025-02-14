#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility.h"
#include "RSTInteractionOption.h"
#include "RSTGameplayAbility_FindInteractions.generated.h"

class URSTIndicatorDescriptor;
class UUserWidget;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_FindInteractions : public URSTGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTInteractionOption> CurrentOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTIndicatorDescriptor*> Indicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionScanRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionScanRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DefaultInteractionWidgetClass;
    
public:
    URSTGameplayAbility_FindInteractions();

    UFUNCTION(BlueprintCallable)
    void UpdateInteractions(const TArray<FRSTInteractionOption>& InteractiveOptions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerInteractionStart(float TimeWaited);
    
    UFUNCTION(BlueprintCallable)
    void TriggerInteractionEnd(float TimeElapsed);
    
};

