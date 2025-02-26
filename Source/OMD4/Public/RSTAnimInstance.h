#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h"
#include "RSTAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Game)
class URSTAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
public:
    URSTAnimInstance();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ModifyMoveSpeed(float InMoveSpeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMontageSlotPlaying(FName SlotName) const;
    
};

