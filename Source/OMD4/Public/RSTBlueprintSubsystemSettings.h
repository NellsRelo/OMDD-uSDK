#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "RSTBlueprintSubsystemSettings.generated.h"

class UGameInstanceSubsystem;
class UWorldSubsystem;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class URSTBlueprintSubsystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWorldSubsystem>> WorldSubsystems;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameInstanceSubsystem>> GameInstanceSubsystems;
    
    URSTBlueprintSubsystemSettings();

};

