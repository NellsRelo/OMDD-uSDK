#pragma once
#include "CoreMinimal.h"
#include "ERSTTrapPlacementFailureReason.h"
#include "ERSTTrapPlacementFlags.h"
#include "RSTNewTrapData.generated.h"

class ARSTPlayerState;
class ARSTTrap;

USTRUCT(BlueprintType)
struct OMD4_API FRSTNewTrapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTPlayerState* TrapOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTTrap* ParentTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTrapPlacementFlags TrapPlacementTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTTrapPlacementFailureReason LastPlacementFailureReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBeingPlaced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPlacementValid: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasEnoughCoin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasReachedPlacementLimit: 1;
    
    FRSTNewTrapData();
};

