#pragma once
#include "CoreMinimal.h"
#include "GameUIManagerSubsystem.h"
#include "RSTUIManagerSubsystem.generated.h"

class URSTSpellbookOperation;

UCLASS(Blueprintable)
class OMD4_API URSTUIManagerSubsystem : public UGameUIManagerSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTSpellbookOperation* CurrentSpellbookOperation;
    
public:
    URSTUIManagerSubsystem();

};

