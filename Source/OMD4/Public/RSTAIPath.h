#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTAIPath.generated.h"

class ARSTPathPoint;

UCLASS(Blueprintable)
class OMD4_API ARSTAIPath : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSTPathPoint*> PathPoints;
    
public:
    ARSTAIPath(const FObjectInitializer& ObjectInitializer);

};

