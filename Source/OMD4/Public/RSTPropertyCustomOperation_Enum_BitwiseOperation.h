#pragma once
#include "CoreMinimal.h"
#include "ERSTBitwiseEnumOp.h"
#include "RSTEnumField.h"
#include "RSTPropertyCustomOperation_EnumField.h"
#include "RSTPropertyCustomOperation_Enum_BitwiseOperation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyCustomOperation_Enum_BitwiseOperation : public URSTPropertyCustomOperation_EnumField {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTEnumField OperationVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTBitwiseEnumOp BitwiseOp;
    
public:
    URSTPropertyCustomOperation_Enum_BitwiseOperation();

};

