#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RSTBiomeTableRow.generated.h"

class URSTPawnDefinitionEnemy;

USTRUCT(BlueprintType)
struct OMD4_API FRSTBiomeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPawnDefinitionEnemy* PawnDefinition;
    
    FRSTBiomeTableRow();
};

