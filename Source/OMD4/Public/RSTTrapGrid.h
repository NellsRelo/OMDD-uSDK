#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTTrapGrid.generated.h"

class UWorld;

UCLASS(Blueprintable)
class OMD4_API ARSTTrapGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridScale;
    
    ARSTTrapGrid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void ToggleDrawTrapGrid(UWorld* World);
    
};

