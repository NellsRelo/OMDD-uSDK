#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UIExtensionHandle.h"
#include "UIExtensionRequest.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FUIExtensionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIExtensionHandle ExtensionHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExtensionPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ContextObject;
    
    UIEXTENSION_API FUIExtensionRequest();
};

