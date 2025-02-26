#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTCinematicProxyActor.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTCinematicProxyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bInvertGlobalTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OverrideTimeDilation;
    
    ARSTCinematicProxyActor(const FObjectInitializer& ObjectInitializer);

};

