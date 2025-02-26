#pragma once
#include "CoreMinimal.h"
#include "RSTUserWidget.h"
#include "RSTCoinFlyoffWidget.generated.h"

class ARSTPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTCoinFlyoffWidget : public URSTUserWidget {
    GENERATED_BODY()
public:
    URSTCoinFlyoffWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(ARSTPlayerState* KillerPlayer, int32 CoinPerPlayer, int32 ExtraCoinForKiller);
    
};

