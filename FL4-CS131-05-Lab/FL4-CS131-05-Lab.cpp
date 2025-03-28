#include <iostream>
using namespace std;
// Function declaration; price and cash are unchanged, only processed, while the other ints come out modified
void makeChange(int price, int cash, int& d$1, int& q25, int& d10, int& n5, int& p1);
int main() {
    // ints declared
    int price, cash, d$1, q25, d10, n5, p1;
    // Flavor text intro w/ user input prompts
    cout << "Welcome to Imaginary Kiosk. Please input values in cents for accurate change.\n\nAmt due: ";
    cin >> price;
    cout << "Cash tendered: " ;
    cin >> cash;
    // Function called
    makeChange(price, cash, d$1, q25, d10, n5, p1);
    // Output of function-calculated int values
    cout << "\nHere is your change.\n\n$1 Bills: " << d$1
    << "\nQuarters: " << q25
    << "\nDimes: " << d10
    << "\nNickels: " << n5
    << "\nPennies: " << p1 << "\n\n";
    system("pause");
    return 0;
}
// Function definition
void makeChange(int price, int amount, int& d$1, int& q25, int& d10, int& n5, int& p1) {
    // New change int initialized for tidiness
    int change = price - amount;
    // Dollars equal change integer divided by 100, remainders are cut off
    d$1 = change / 100;
    // Change is divided by 100, the result is cut off and the remainder is passed on
    change %= 100;
    // Et cetera, same process until pennies
    q25 = change / 25;
    change %= 25;
    d10 = change / 10;
    change %= 10;
    n5 = change / 5;
    change %= 5;
    p1 = change / 1;
    change %= 1;
}