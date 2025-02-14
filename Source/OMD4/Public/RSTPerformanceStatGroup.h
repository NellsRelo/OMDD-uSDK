#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERSTDisplayablePerformanceStat.h"
#include "RSTPerformanceStatGroup.generated.h"

USTRUCT(BlueprintType)
struct FRSTPerformanceStatGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery VisibilityQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ERSTDisplayablePerformanceStat> AllowedStats;
    
    OMD4_API FRSTPerformanceStatGroup();
};

