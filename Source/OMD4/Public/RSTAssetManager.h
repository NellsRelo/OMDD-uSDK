#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "RSTAssetManager.generated.h"

class UObject;
class UPrimaryDataAsset;
class URSTGameData;
class URSTPawnDefinition;

UCLASS(Blueprintable, Config=Game)
class URSTAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTGameData> RSTGameDataPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UPrimaryDataAsset*> GameDataMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTPawnDefinition> DefaultPawnDefinition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> LoadedAssets;
    
public:
    URSTAssetManager();

};

