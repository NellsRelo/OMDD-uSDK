#pragma once
#include "CoreMinimal.h"
#include "RSTItemAttribute.h"
#include "RSTItemAttribute_Integer.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTItemAttribute_Integer : public URSTItemAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    URSTItemAttribute_Integer();

};

