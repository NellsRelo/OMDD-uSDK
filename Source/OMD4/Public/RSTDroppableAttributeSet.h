#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "RSTAttributeSet.h"
#include "RSTDroppableAttributeSet.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTDroppableAttributeSet : public URSTAttributeSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GoldCoinChance;
    
public:
    URSTDroppableAttributeSet();

};

