#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility_WheelBase.h"
#include "RSTPingTrackerData.h"
#include "RSTGameplayAbility_CommunicationWheel.generated.h"

class UCommonActivatableWidget;
class URSTCommunicationDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_CommunicationWheel : public URSTGameplayAbility_WheelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> CommunicationWheelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTCommunicationDefinition*> ResponseWheelOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTCommunicationDefinition*> DefaultWheelOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTCommunicationDefinition*> EmoteWheelOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTCommunicationDefinition* DefaultPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTPingTrackerData HitExistingPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWidgetCancelled;
    
public:
    URSTGameplayAbility_CommunicationWheel();

    UFUNCTION(BlueprintCallable)
    void SetWidgetCancelled(bool WasCancelled);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URSTCommunicationDefinition*> GetCommunicationWheelOptions() const;
    
};

