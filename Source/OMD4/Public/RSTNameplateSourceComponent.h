#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTNameplateSourceComponent.generated.h"

class AActor;
class URSTNameplateSourceComponent;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTNameplateSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> NameplateIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowClampToScreenArrow;
    
public:
    URSTNameplateSourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTNameplateSourceComponent* FindNameplateSourceComponent(const AActor* Actor);
    
};

