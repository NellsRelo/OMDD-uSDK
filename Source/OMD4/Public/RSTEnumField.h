#pragma once
#include "CoreMinimal.h"
#include "RSTEnumField.generated.h"

USTRUCT(BlueprintType)
struct FRSTEnumField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnumName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBitMask;
    
    OMD4_API FRSTEnumField();
};

