#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERSTGamepadSensitivity.h"
#include "RSTAimSensitivityData.generated.h"

UCLASS(Blueprintable, Const)
class OMD4_API URSTAimSensitivityData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERSTGamepadSensitivity, float> SensitivityMap;
    
public:
    URSTAimSensitivityData();

};

