#pragma once
#include "CoreMinimal.h"
#include "RSTCinematicProxyActor.h"
#include "RSTPostGameProxyActor.generated.h"

class URSTSkinDefinition;

UCLASS(Blueprintable)
class OMD4_API ARSTPostGameProxyActor : public ARSTCinematicProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTSkinDefinition* SkinDefinition;
    
    ARSTPostGameProxyActor(const FObjectInitializer& ObjectInitializer);

};

