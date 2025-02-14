#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTBuffVolumeElement.h"
#include "RSTBuffVolumeElement_BlueprintEvent.generated.h"

USTRUCT(BlueprintType)
struct FRSTBuffVolumeElement_BlueprintEvent : public FRSTBuffVolumeElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecurring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProcessLeave;
    
    OMD4_API FRSTBuffVolumeElement_BlueprintEvent();
};

