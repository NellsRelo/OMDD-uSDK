#pragma once
#include "CoreMinimal.h"
#include "PlayerSpecificSubStatData.h"
#include "PlayerSpecificStatData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSpecificStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCumulative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPlayerSpecificSubStatData> PlayerStats;
    
    OMD4_API FPlayerSpecificStatData();
};

