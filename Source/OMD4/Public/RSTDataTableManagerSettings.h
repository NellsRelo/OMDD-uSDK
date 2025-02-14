#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RSTDataTableManagerSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OMD4_API URSTDataTableManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LimbRemovalTable;
    
    URSTDataTableManagerSettings();

};

