#pragma once
#include "CoreMinimal.h"
#include "CommonUITypes.h"
#include "RSTMappingContextMetadata.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTMappingContextMetadata : public UCommonMappingContextMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRemapGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRemapKeyboardMouse;
    
    URSTMappingContextMetadata();

};

