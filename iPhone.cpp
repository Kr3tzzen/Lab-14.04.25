#include "IPhone.h"

IPhone::IPhone(const string& name) : APPLE(name) {}

bool IPhone::isMac() { return false; }
bool IPhone::isIPhone() { return true; }
bool IPhone::isIPad() { return false; }
bool IPhone::isAppleWatch() { return false; }
bool IPhone::isAirPods() { return false; }

ostream& operator<<(ostream& os, const IPhone& device) {
    os << "IPhone Model: " << device.getName();
    return os;
}

istream& operator>>(istream& is, IPhone& device) {
    cout << "Enter iPhone name: ";
    is >> device.name;
    return is;
}

bool IPhone::operator==(const IPhone& other) const {
    return name == other.name;
}

IPhone IPhone::operator+(const IPhone& other) const {
    return IPhone(name + " & " + other.name);
}
