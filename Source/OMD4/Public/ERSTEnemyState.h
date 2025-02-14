#pragma once
#include "CoreMinimal.h"
#include "ERSTEnemyState.generated.h"

UENUM(BlueprintType)
enum class ERSTEnemyState : uint8 {
    NotSet,
    Spawn,
    Reset,
    MoveToNode,
    Combat,
    WaitForDoor,
    SearchForPlayer,
    Launched,
    InAbility,
    Guard,
    ReturnToGuard,
    Recover,
    FollowMaster,
    Interacting,
    Custom,
};

