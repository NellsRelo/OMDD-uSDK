#pragma once
#include "CoreMinimal.h"
#include "RSTWheelOptionData.h"
#include "RSTCommunicationWheelOptionData.generated.h"

class URSTCommunicationDefinition;

USTRUCT(BlueprintType)
struct OMD4_API FRSTCommunicationWheelOptionData : public FRSTWheelOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTCommunicationDefinition* CommunicationDefinition;
    
    FRSTCommunicationWheelOptionData();
};

