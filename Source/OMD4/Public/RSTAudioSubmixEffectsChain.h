#pragma once
#include "CoreMinimal.h"
#include "RSTAudioSubmixEffectsChain.generated.h"

class USoundEffectSubmixPreset;
class USoundSubmix;

USTRUCT(BlueprintType)
struct FRSTAudioSubmixEffectsChain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundSubmix* Submix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USoundEffectSubmixPreset*> SubmixEffectChain;
    
    OMD4_API FRSTAudioSubmixEffectsChain();
};

