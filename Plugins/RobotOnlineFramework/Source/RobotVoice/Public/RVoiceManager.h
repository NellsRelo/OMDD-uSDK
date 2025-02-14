#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "RVoiceManager.generated.h"

class URVoiceToolkit;

UCLASS(Blueprintable, Config=Game)
class ROBOTVOICE_API URVoiceManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URVoiceToolkit> ToolkitClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URVoiceToolkit*> VoiceToolkits;
    
public:
    URVoiceManager();

};

