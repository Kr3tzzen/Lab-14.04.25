#include "iPad.h"

iPad::iPad(const string& name) : APPLE(name) {}

bool iPad::isMac() { return false; }
bool iPad::isIPhone() { return false; }
bool iPad::isIPad() { return true; }
bool iPad::isAppleWatch() { return false; }
bool iPad::isAirPods() { return false; }

ostream& operator<<(ostream& os, const iPad& device) {
    os << "iPad Model: " << device.getName();
    return os;
}

istream& operator>>(istream& is, iPad& device) {
    cout << "Enter iPad name: ";
    is >> device.name;
    return is;
}

bool iPad::operator==(const iPad& other) const {
    return name == other.name;
}

iPad iPad::operator+(const iPad& other) const {
    return iPad(name + " & " + other.name);
}
