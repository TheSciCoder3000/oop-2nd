#include <iostream>
using namespace std;

int main() {
    int SWA, SWB, SWC;
    string LED;

    cout << "Enter value of switch SWA: ";
    cin >> SWA;

    cout << "Enter value of switch SWB: ";
    cin >> SWB;

    cout << "Enter value of switch SWC: ";
    cin >> SWC;

    LED = SWA == 5 ? SWB == 5 ? SWC == 5 ? "ON" : "OFF" : "OFF" : "OFF";
    cout << "LED " << LED;
    return 0;
}
