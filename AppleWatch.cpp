#include "AppleWatch.h"

AppleWatch::AppleWatch(const string& name) : APPLE(name) {}

bool AppleWatch::isMac() { return false; }
bool AppleWatch::isIPhone() { return false; }
bool AppleWatch::isIPad() { return false; }
bool AppleWatch::isAppleWatch() { return true; }
bool AppleWatch::isAirPods() { return false; }

ostream& operator<<(ostream& os, const AppleWatch& device) {
    os << "Apple Watch Model: " << device.getName();
    return os;
}

istream& operator>>(istream& is, AppleWatch& device) {
    cout << "Enter Apple Watch name: ";
    is >> device.name;
    return is;
}

bool AppleWatch::operator==(const AppleWatch& other) const {
    return name == other.name;
}

AppleWatch AppleWatch::operator+(const AppleWatch& other) const {
    return AppleWatch(name + " & " + other.name);
}
