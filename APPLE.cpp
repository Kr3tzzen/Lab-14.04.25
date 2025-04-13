#include "APPLE.h"

APPLE::APPLE(const string& name) : name(name) {}

string APPLE::getName() const {
    return name;
}

ostream& operator<<(ostream& os, const APPLE& device) {
    os << "Device: " << device.getName();
    return os;
}
