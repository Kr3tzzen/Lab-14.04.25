#ifndef TIMCOOK_H
#define TIMCOOK_H

#include "APPLE.h"

class TimCook {
private:
    APPLE* device;

public:
    TimCook(APPLE* device);
    string getDeviceName() const;
    friend ostream& operator<<(ostream& os, const TimCook& tc);
};

#endif // TIMCOOK_H
