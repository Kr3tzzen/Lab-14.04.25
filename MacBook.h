#ifndef MACBOOK_H
#define MACBOOK_H

#include "APPLE.h"

class MacBook : public APPLE {
public:
    MacBook(const string& name);

    bool isMac() override;
    bool isIPhone() override;
    bool isIPad() override;
    bool isAppleWatch() override;
    bool isAirPods() override;

    // Перегрузка оператора <<
    friend ostream& operator<<(ostream& os, const MacBook& device);

    // Перегрузка оператора >>
    friend istream& operator>>(istream& is, MacBook& device);

    // Перегрузка оператора ==
    bool operator==(const MacBook& other) const;

    // Перегрузка оператора +
    MacBook operator+(const MacBook& other) const;
};

#endif // MACBOOK_H
