#pragma once
#include "CoreMinimal.h"
#include "RSTNameplateRequest.generated.h"

class URSTNameplateManagerComponent;

USTRUCT(BlueprintType)
struct OMD4_API FRSTNameplateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTNameplateManagerComponent* NameplateManager;
    
    FRSTNameplateRequest();
};

