#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RSTAccoladeDefinition.h"
#include "RSTPostGameAccoladeData.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTPostGameAccoladeData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAccoladeDefinition> AccoladeData;
    
    URSTPostGameAccoladeData();

    UFUNCTION(BlueprintCallable)
    bool GetAccoladeDataByTag(FGameplayTag Identifier, FRSTAccoladeDefinition& OutData);
    
};

