#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTDirectoryChunkAssignments.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTDirectoryChunkAssignments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath Directory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkId;
    
    FRSTDirectoryChunkAssignments();
};

