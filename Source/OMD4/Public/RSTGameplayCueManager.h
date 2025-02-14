#pragma once
#include "CoreMinimal.h"
#include "GameplayCueManager.h"
#include "RSTGameplayCueManager.generated.h"

UCLASS(Blueprintable)
class URSTGameplayCueManager : public UGameplayCueManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UClass*> PreloadedCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UClass*> AlwaysLoadedCues;
    
public:
    URSTGameplayCueManager();

};

