#include <iostream>
#include "IPhone.h"
#include "AppleWatch.h"
#include "AirPods.h"
#include "MacBook.h"
#include "iPad.h"

using namespace std;

int main() {
    IPhone iPhone1("iPhone 14");
    IPhone iPhone2("iPhone 13");

    AppleWatch appleWatch1("Apple Watch Series 7");
    AppleWatch appleWatch2("Apple Watch Series 6");

    AirPods airPods1("AirPods Pro");
    AirPods airPods2("AirPods 2nd Gen");

    MacBook macBook1("MacBook Air");
    MacBook macBook2("MacBook Pro");

    iPad iPad1("iPad Pro");
    iPad iPad2("iPad Mini");

    cout << iPhone1 << endl;
    cout << appleWatch1 << endl;
    cout << airPods1 << endl;
    cout << macBook1 << endl;
    cout << iPad1 << endl;

    IPhone iPhoneCombined = iPhone1 + iPhone2;
    cout << "Combined iPhone: " << iPhoneCombined << endl;

    MacBook combinedMacBook = macBook1 + macBook2;
    cout << "Combined MacBook: " << combinedMacBook << endl;

    if (iPhone1 == iPhone2) {
        cout << "Devices are the same!" << endl;
    } else {
        cout << "Devices are different!" << endl;
    }

    AirPods airPodsInput("");
    cin >> airPodsInput;
    cout << "You entered: " << airPodsInput << endl;

    return 0;
}
