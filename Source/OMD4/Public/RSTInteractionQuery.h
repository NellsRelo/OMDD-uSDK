#pragma once
#include "CoreMinimal.h"
#include "RSTInteractionQuery.generated.h"

class AActor;
class AController;
class UObject;

USTRUCT(BlueprintType)
struct FRSTInteractionQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> RequestingAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> RequestingController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> OptionalObjectData;
    
    OMD4_API FRSTInteractionQuery();
};

