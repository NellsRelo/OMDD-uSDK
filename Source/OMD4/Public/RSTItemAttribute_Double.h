#pragma once
#include "CoreMinimal.h"
#include "RSTItemAttribute.h"
#include "RSTItemAttribute_Double.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTItemAttribute_Double : public URSTItemAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    URSTItemAttribute_Double();

};

