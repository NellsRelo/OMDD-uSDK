#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityPlaceable.h"
#include "RSTBlunderbussPet.h"
#include "RSTBlunderbussPetUltimate.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTBlunderbussPetUltimate : public ARSTBlunderbussPet/*, public IRSTAbilityPlaceable*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
    ARSTBlunderbussPetUltimate(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

