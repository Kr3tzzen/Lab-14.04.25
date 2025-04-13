#include "AirPods.h"
#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

AirPods::AirPods(const string& name) : APPLE(name) {}

bool AirPods::isMac()        { return false; }
bool AirPods::isIPhone()     { return false; }
bool AirPods::isIPad()       { return false; }
bool AirPods::isAppleWatch() { return false; }
bool AirPods::isAirPods()    { return true; }

ostream& operator<<(ostream& os, const AirPods& device) {
    os << "AirPods Model: " << device.getName();
    return os;
}

string toLower(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(),
              [](unsigned char c) { return tolower(c); });
    return result;
}

istream& operator>>(istream& is, AirPods& device) {
    const string validModels[] = {
        "airpods 2", "airpods 3", "airpods 4", "airpods pro", "airpods max"
    };

    string input;
    bool valid = false;

    while (!valid) {
        cout << "Enter AirPods model (AirPods 2, 3, 4, Pro, or Max): ";
        is >> ws;
        getline(is, input);

        string lowerInput = toLower(input);
        for (const string& model : validModels) {
            if (lowerInput == model) {
                device.name = input;
                valid = true;
                break;
            }
        }

        if (!valid) {
            cout << "Invalid model entered. Please try again." << endl;
        }
    }

    return is;
}

bool AirPods::operator==(const AirPods& other) const {
    return toLower(name) == toLower(other.name);
}

AirPods AirPods::operator+(const AirPods& other) const {
    return AirPods(name + " & " + other.name);
}
