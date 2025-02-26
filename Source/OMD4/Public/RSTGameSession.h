#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "RSTGameSession.generated.h"

class URSTMissionDefinition;

UCLASS(Blueprintable)
class OMD4_API ARSTGameSession : public AGameSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTMissionDefinition* MissionDefinition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Password;
    
public:
    ARSTGameSession(const FObjectInitializer& ObjectInitializer);

};

