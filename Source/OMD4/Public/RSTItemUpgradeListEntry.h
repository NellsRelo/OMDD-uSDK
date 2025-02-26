#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RSTItemUpgradeListEntry.generated.h"

class URSTItemUpgradeDefinition;

USTRUCT(BlueprintType)
struct OMD4_API FRSTItemUpgradeListEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTItemUpgradeDefinition* ItemUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpgradeLevel;
    
    FRSTItemUpgradeListEntry();
};

