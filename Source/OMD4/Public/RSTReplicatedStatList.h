#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RSTReplicatedStatEntry.h"
#include "RSTReplicatedStatKey.h"
#include "RSTReplicatedStatList.generated.h"

USTRUCT(BlueprintType)
struct FRSTReplicatedStatList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTReplicatedStatEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<FRSTReplicatedStatKey, int32> IndexCache;
    
public:
    OMD4_API FRSTReplicatedStatList();
};

