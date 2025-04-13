#ifndef AIRPODS_H
#define AIRPODS_H

#include "APPLE.h"

class AirPods : public APPLE {
public:
    AirPods(const string& name);

    bool isMac() override;
    bool isIPhone() override;
    bool isIPad() override;
    bool isAppleWatch() override;
    bool isAirPods() override;

    // Перегрузка оператора <<
    friend ostream& operator<<(ostream& os, const AirPods& device);

    // Перегрузка оператора >>
    friend istream& operator>>(istream& is, AirPods& device);

    // Перегрузка оператора ==
    bool operator==(const AirPods& other) const;

    // Перегрузка оператора +
    AirPods operator+(const AirPods& other) const;
};

#endif // AIRPODS_H
