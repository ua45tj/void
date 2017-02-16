#include "Alpha.h"

Alpha::Alpha()
    : mValue(1337)
{
}

Alpha::~Alpha()
{
}

int Alpha::getAlphaValue()
{
    return mValue++;
}
