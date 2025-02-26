#include "RSTAbilityTask_TrackMovePoints.h"

URSTAbilityTask_TrackMovePoints::URSTAbilityTask_TrackMovePoints() {
}

URSTAbilityTask_TrackMovePoints* URSTAbilityTask_TrackMovePoints::TrackMovePoints(UGameplayAbility* OwningAbility, float Frequency, float MoveThreshold, FVector RelativeLocationOffset, FGameplayTag CueDataTag) {
    return NULL;
}

void URSTAbilityTask_TrackMovePoints::StopRecording(bool bLogCurrent) {
}

void URSTAbilityTask_TrackMovePoints::ResumeRecording() {
}

bool URSTAbilityTask_TrackMovePoints::IsRecording() const {
    return false;
}

TArray<FRSTVectorArray> URSTAbilityTask_TrackMovePoints::GetMoveLocations() const {
    return TArray<FRSTVectorArray>();
}


