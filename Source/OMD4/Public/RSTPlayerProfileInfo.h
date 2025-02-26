#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RSTPlayerProfileInfo.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTPlayerProfileInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    URSTPlayerProfileInfo();

};

