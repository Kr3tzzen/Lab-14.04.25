#ifndef APPLEWATCH_H
#define APPLEWATCH_H

#include "APPLE.h"

class AppleWatch : public APPLE {
public:
    AppleWatch(const string& name);

    bool isMac() override;
    bool isIPhone() override;
    bool isIPad() override;
    bool isAppleWatch() override;
    bool isAirPods() override;

    // Перегрузка оператора <<
    friend ostream& operator<<(ostream& os, const AppleWatch& device);

    // Перегрузка оператора >>
    friend istream& operator>>(istream& is, AppleWatch& device);

    // Перегрузка оператора ==
    bool operator==(const AppleWatch& other) const;

    // Перегрузка оператора +
    AppleWatch operator+(const AppleWatch& other) const;
};

#endif // APPLEWATCH_H
