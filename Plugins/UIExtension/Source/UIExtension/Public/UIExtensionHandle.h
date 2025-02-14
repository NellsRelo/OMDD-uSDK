#pragma once
#include "CoreMinimal.h"
#include "UIExtensionHandle.generated.h"

USTRUCT(BlueprintType)
struct UIEXTENSION_API FUIExtensionHandle {
    GENERATED_BODY()
public:
    FUIExtensionHandle();
};
FORCEINLINE uint32 GetTypeHash(const FUIExtensionHandle) { return 0; }

