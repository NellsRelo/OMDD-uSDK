#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RVoiceToolkit.generated.h"

class ULocalPlayer;

UCLASS(Blueprintable)
class ROBOTVOICE_API URVoiceToolkit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ULocalPlayer> LocalPlayerOwner;
    
public:
    URVoiceToolkit();

};

