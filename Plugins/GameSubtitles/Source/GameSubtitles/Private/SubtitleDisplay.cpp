#include "SubtitleDisplay.h"

USubtitleDisplay::USubtitleDisplay() {
    this->Options = NULL;
    this->WrapTextAt = 0.00f;
    this->bPreviewMode = false;
}

bool USubtitleDisplay::HasSubtitles() const {
    return false;
}


