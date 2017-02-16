#include "Beta.h"

Beta::Beta()
    : mAlpha()
    , mValue(420)
{
}

Beta::~Beta()
{
}

int Beta::getBetaValue()
{
    mValue = (mValue + mAlpha.getAlphaValue()) / 2;
    return mValue;
}
