#ifndef IPAD_H
#define IPAD_H

#include "APPLE.h"

class iPad : public APPLE {
public:
    iPad(const string& name);

    bool isMac() override;
    bool isIPhone() override;
    bool isIPad() override;
    bool isAppleWatch() override;
    bool isAirPods() override;

    // Перегрузка оператора <<
    friend ostream& operator<<(ostream& os, const iPad& device);

    // Перегрузка оператора >>
    friend istream& operator>>(istream& is, iPad& device);

    // Перегрузка оператора ==
    bool operator==(const iPad& other) const;

    // Перегрузка оператора +
    iPad operator+(const iPad& other) const;
};

#endif // IPAD_H
