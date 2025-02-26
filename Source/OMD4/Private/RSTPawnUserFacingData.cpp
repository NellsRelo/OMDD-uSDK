#include "RSTPawnUserFacingData.h"

URSTPawnUserFacingData::URSTPawnUserFacingData() {
    this->PawnIcon_Head = NULL;
    this->PawnIcon_FullHead = NULL;
    this->PawnIcon_FullBody = NULL;
    this->HeroSelectProxyClass = NULL;
    this->IdleSequence = NULL;
    this->AnimInstanceHeroSelectClass = NULL;
    this->DisplayIndex = 0;
}

void URSTPawnUserFacingData::SortUserFacingArray(const TArray<URSTPawnUserFacingData*>& UserFacingArray, TArray<URSTPawnUserFacingData*>& OutUserFacingArray) const {
}

void URSTPawnUserFacingData::SortHeroTagArray(const TArray<FGameplayTag>& InTags, TArray<FGameplayTag>& OutTags) const {
}


