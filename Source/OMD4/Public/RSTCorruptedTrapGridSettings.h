#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RSTCorruptedTrapGridDecoratorEntry.h"
#include "RSTCorruptedTrapGridTransformVariance.h"
#include "RSTCorruptedTrapGridSettings.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTCorruptedTrapGridSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTCorruptedTrapGridDecoratorEntry> DecoratorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTCorruptedTrapGridTransformVariance CeilingTransformVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTCorruptedTrapGridTransformVariance WallTransformVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTCorruptedTrapGridTransformVariance FloorTransformVariance;
    
    URSTCorruptedTrapGridSettings();

};

