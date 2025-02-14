#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RSTExperienceDefinition.generated.h"

class UGameFeatureAction;
class URSTExperienceActionSet;
class URSTPawnDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTExperienceDefinition : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameFeaturesToEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameFeatureAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTExperienceActionSet*> ActionSets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTPawnDefinition*> DefaultPawnDefinitions;
    
public:
    URSTExperienceDefinition();

};

