#include <iostream>
using namespace std;

int main () {
    double taxRate = 0.1;
    double srCitizenRate = 0.2;
    bool isSr = false;
    string res;
    double firstItem, secondItem, thirdItem;
    double tax, discount, net, total, payment = 0;

    cout << "Please enter the price of the first Item: ";
    cin >> firstItem;

    cout << "Please enter the price of the second Item: ";
    cin >> secondItem;

    cout << "Please enter the price of the third Item: ";
    cin >> thirdItem;

    cout << "Are you a senior citizen [Y/N]: ";
    cin >> res;

    total = firstItem + secondItem + thirdItem;
    isSr = (res == "Y" || res == "y") ? true : false;
    discount = isSr ? total*srCitizenRate : 0;
    tax = total*taxRate;
    net = total + tax - discount;

    cout << "Total:        " << total << endl
         << "Tax:         +" << tax << endl
         << "Sr Discount: -" << discount << endl
         << "--------------" << endl
         << "Total Amount: " << net << endl;

    do {
        cout << "Enter your payment: ";
        cin >> payment;

        if (payment < net) {
            cout << "Insufficient funds, please try again";
        }
    } while(payment < net);

    cout << "Your change is: " << payment-net;

    return 0;
}
