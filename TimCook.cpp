#include "TimCook.h"

TimCook::TimCook(APPLE* device) : device(device) {}

string TimCook::getDeviceName() const {
    return device ? device->getName() : "No Device";
}

ostream& operator<<(ostream& os, const TimCook& tc) {
    os << "Tim Cook's device: " << tc.getDeviceName();
    return os;
}

