#ifndef BETA_H
#define BETA_H

#include "Alpha.h"

class Beta
{
public:
    Beta();
    ~Beta();

    int getBetaValue();

private:
    Alpha mAlpha;
    int mValue;
};

#endif // BETA_H
