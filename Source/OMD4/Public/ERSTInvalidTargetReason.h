#pragma once
#include "CoreMinimal.h"
#include "ERSTInvalidTargetReason.generated.h"

UENUM(BlueprintType)
enum class ERSTInvalidTargetReason : uint8 {
    IsValid,
    NoTargetingData,
    NoTagAssetInterface,
    NoOwningActor,
    ProxyActorAwaitingReplacement,
    IgnoreTagMatch,
    WrongTeam,
    ExceedsAcquisitionRadius,
    TargetNotBlocked,
    TargetMustBeDamaged,
    TargetInvulnerable,
    NoMatchingRule,
};

