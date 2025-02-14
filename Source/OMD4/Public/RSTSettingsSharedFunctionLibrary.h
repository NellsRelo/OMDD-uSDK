#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSTSettingsSharedFunctionLibrary.generated.h"

class APlayerController;
class URSTSettingsShared;

UCLASS(Blueprintable)
class OMD4_API URSTSettingsSharedFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTSettingsSharedFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static URSTSettingsShared* GetSharedPlayerSettings(APlayerController* PlayerController);
    
};

