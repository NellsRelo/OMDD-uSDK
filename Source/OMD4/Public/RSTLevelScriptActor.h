#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "RSTLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ARSTLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

