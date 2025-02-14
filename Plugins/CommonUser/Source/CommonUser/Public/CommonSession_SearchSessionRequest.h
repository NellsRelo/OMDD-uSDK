#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonInt64SearchParams.h"
#include "CommonSession_FindSessionsFinishedDynamicDelegate.h"
#include "CommonStringSearchParams.h"
#include "ECommonSessionOnlineMode.h"
#include "CommonSession_SearchSessionRequest.generated.h"

class UCommonSession_SearchResult;

UCLASS(Blueprintable)
class COMMONUSER_API UCommonSession_SearchSessionRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonSessionOnlineMode OnlineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLobbies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonStringSearchParams> StringSearchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonInt64SearchParams> Int64SearchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchPasswordProtected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommonSession_SearchResult*> Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFindFriendSessions;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSession_FindSessionsFinishedDynamic K2_OnSearchFinished;
    
public:
    UCommonSession_SearchSessionRequest();

};

