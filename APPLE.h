#ifndef APPLE_H
#define APPLE_H

#include <iostream>
#include <string>

using namespace std;

class APPLE {
protected:
    string name;

public:
    virtual ~APPLE() = default;
    APPLE(const string& name);
    string getName() const;

    virtual bool isMac() = 0;
    virtual bool isIPhone() = 0;
    virtual bool isIPad() = 0;
    virtual bool isAppleWatch() = 0;
    virtual bool isAirPods() = 0;

    // Перегрузка оператора <<
    friend ostream& operator<<(ostream& os, const APPLE& device);

    // Перегрузка оператора >>
    friend istream& operator>>(istream& is, APPLE& device);

    // Перегрузка оператора ==
    bool operator==(const APPLE& other) const;

    // Перегрузка оператора +
    APPLE operator+(const APPLE& other) const;
};

#endif // APPLE_H
