#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RSTInventoryEntry.h"
#include "RSTInventoryList.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FRSTInventoryList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTInventoryEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UActorComponent* OwnerComponent;
    
public:
    OMD4_API FRSTInventoryList();
};

