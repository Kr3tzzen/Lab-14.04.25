#include "MacBook.h"

MacBook::MacBook(const string& name) : APPLE(name) {}

bool MacBook::isMac() { return true; }
bool MacBook::isIPhone() { return false; }
bool MacBook::isIPad() { return false; }
bool MacBook::isAppleWatch() { return false; }
bool MacBook::isAirPods() { return false; }

ostream& operator<<(ostream& os, const MacBook& device) {
    os << "MacBook Model: " << device.getName();
    return os;
}

istream& operator>>(istream& is, MacBook& device) {
    cout << "Enter MacBook name: ";
    is >> device.name;
    return is;
}

bool MacBook::operator==(const MacBook& other) const {
    return name == other.name;
}

MacBook MacBook::operator+(const MacBook& other) const {
    return MacBook(name + " & " + other.name);
}
