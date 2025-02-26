#pragma once
#include "CoreMinimal.h"
#include "PreEnemyEnterRiftDelegate.generated.h"

class ARSTAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FPreEnemyEnterRift, ARSTAICharacter*, AiCharacter);

