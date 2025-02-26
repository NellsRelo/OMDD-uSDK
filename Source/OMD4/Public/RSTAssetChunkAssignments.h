#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTAssetChunkAssignments.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTAssetChunkAssignments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId PrimaryAssetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkId;
    
    FRSTAssetChunkAssignments();
};

