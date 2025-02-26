#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTProjectileTrail.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTProjectileTrail : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* TrailFX;
    
    ARSTProjectileTrail(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTrailFXFinished(UNiagaraComponent* PSystem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumTrails();
    
};

