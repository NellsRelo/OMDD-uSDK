#include "VertexAnimation.h"

FVertexAnimation::FVertexAnimation() {
    this->bOverrideFrameRate = false;
    this->FrameRate = 0.00f;
    this->bOverrideFrames = false;
    this->Frames = 0;
    this->bUseRootMotion = false;
    this->FrameMaxIndex = 0;
    this->Offset = 0;
    this->Speed = 0.00f;
    this->SequenceLength = 0.00f;
    this->bHasRootMotion = false;
}

