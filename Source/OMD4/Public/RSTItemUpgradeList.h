#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RSTItemUpgradeListEntry.h"
#include "RSTItemUpgradeList.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTItemUpgradeList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTItemUpgradeListEntry> Entries;
    
public:
    FRSTItemUpgradeList();
};

