#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "RSTPingableInterface.h"
#include "RSTPickup.generated.h"

class ARSTPlayerCharacter;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTPickup : public AActor, public IRSTPingableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* GeoCollisionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* PlayerCollisionSphere;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PickupTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PickupName;
    
public:
    ARSTPickup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PhysicsLaunch(FVector LaunchVector, float LaunchForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostGame();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerOverlap(ARSTPlayerCharacter* PlayerCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

