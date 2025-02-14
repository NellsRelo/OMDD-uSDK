#pragma once
#include "CoreMinimal.h"
#include "RSTPlayerProfileMessage.generated.h"

class URSTPlayerProfile;

USTRUCT(BlueprintType)
struct OMD4_API FRSTPlayerProfileMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPlayerProfile* PlayerProfile;
    
    FRSTPlayerProfileMessage();
};

