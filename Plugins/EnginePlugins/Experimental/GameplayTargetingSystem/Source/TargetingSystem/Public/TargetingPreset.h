#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TargetingTaskSet.h"
#include "TargetingPreset.generated.h"

UCLASS(Blueprintable)
class TARGETINGSYSTEM_API UTargetingPreset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetingTaskSet TargetingTaskSet;
    
public:
    UTargetingPreset();

};

