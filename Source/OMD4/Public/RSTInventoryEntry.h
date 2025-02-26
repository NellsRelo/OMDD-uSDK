#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RSTInventoryEntry.generated.h"

class ARSTInventoryItemInstance;

USTRUCT(BlueprintType)
struct FRSTInventoryEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTInventoryItemInstance* Instance;
    
public:
    OMD4_API FRSTInventoryEntry();
};

