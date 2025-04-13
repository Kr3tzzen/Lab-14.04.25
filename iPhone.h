#ifndef IPHONE_H
#define IPHONE_H

#include "APPLE.h"

class IPhone : public APPLE {
public:
    IPhone(const string& name);

    bool isMac() override;
    bool isIPhone() override;
    bool isIPad() override;
    bool isAppleWatch() override;
    bool isAirPods() override;

    // Перегрузка оператора <<
    friend ostream& operator<<(ostream& os, const IPhone& device);

    // Перегрузка оператора >>
    friend istream& operator>>(istream& is, IPhone& device);

    // Перегрузка оператора ==
    bool operator==(const IPhone& other) const;

    // Перегрузка оператора +
    IPhone operator+(const IPhone& other) const;
};

#endif // IPHONE_H
