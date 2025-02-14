#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/GameFrameworkComponent.h"
#include "RDialogueQuery.h"
#include "RDialogueComponent.generated.h"

class AActor;
class UAudioComponent;
class URDialogueComponent;
class URDialogueRuleset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROBOTDIALOGUESYSTEM_API URDialogueComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URDialogueRuleset* Ruleset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    URDialogueComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDialogueRuleset(URDialogueRuleset* InDialogueRuleset);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlayResponse(FName ConceptName, FGuid RuleId, int32 ResponseIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestDialogueFromOtherComponent(const FRDialogueQuery& Query, URDialogueComponent* OtherComponent, bool bReplicated);
    
    UFUNCTION(BlueprintCallable)
    void RequestDialogue(const FRDialogueQuery& Query, bool bReplicated);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_PlayResponse(FName ConceptName, FGuid RuleId, int32 ResponseIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URDialogueComponent* FindDialogueComponent(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayResponse(FName ConceptName, FGuid RuleId, int32 ResponseIndex);
    
};

