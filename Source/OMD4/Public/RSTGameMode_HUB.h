#pragma once
#include "CoreMinimal.h"
#include "RSTGameModeBase.h"
#include "RSTGameMode_HUB.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD4_API ARSTGameMode_HUB : public ARSTGameModeBase {
    GENERATED_BODY()
public:
    ARSTGameMode_HUB(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPassword(const FString& Password);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPasswordProtected() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheWhitelistedPlayers();
    
};

