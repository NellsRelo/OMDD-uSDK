#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVADebugSkeletonMode.h"
#include "VADebugBoneSettings.generated.h"

USTRUCT(BlueprintType)
struct VERTEXANIMATIONMANAGER_API FVADebugBoneSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVADebugSkeletonMode> Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    FVADebugBoneSettings();
};

