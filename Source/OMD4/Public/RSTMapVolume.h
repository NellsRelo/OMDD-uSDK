#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "RSTMapVolume.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class OMD4_API ARSTMapVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapTexture;
    
    ARSTMapVolume(const FObjectInitializer& ObjectInitializer);

};

