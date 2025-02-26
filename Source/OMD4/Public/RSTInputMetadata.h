#pragma once
#include "CoreMinimal.h"
#include "CommonUITypes.h"
#include "RSTInputMetadata.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTInputMetadata : public UCommonInputMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRemapGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRemapKeyboardMouse;
    
    URSTInputMetadata();

};

