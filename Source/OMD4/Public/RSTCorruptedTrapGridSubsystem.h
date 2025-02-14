#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RSTCorruptedTrapGridSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class OMD4_API URSTCorruptedTrapGridSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCorruptedTrapGrid;
    
public:
    URSTCorruptedTrapGridSubsystem();

};

