#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "RSTSpectatorPawn.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    ARSTSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

