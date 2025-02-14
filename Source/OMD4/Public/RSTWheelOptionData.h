#pragma once
#include "CoreMinimal.h"
#include "RSTWheelOptionData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct OMD4_API FRSTWheelOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* OptionTexture;
    
    FRSTWheelOptionData();
};

