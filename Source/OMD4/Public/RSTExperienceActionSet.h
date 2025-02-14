#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RSTExperienceActionSet.generated.h"

class UGameFeatureAction;

UCLASS(Blueprintable)
class OMD4_API URSTExperienceActionSet : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameFeatureAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameFeaturesToEnable;
    
    URSTExperienceActionSet();

};

