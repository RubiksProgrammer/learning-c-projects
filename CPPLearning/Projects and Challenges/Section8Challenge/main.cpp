#include <iostream>

using namespace std;


int main() {
    
    const int cents_in_dollar = 100;
    const int cents_in_quarter = 25;
    const int cents_in_dime = 10;
    const int cents_in_nickel = 5;
    int dollars = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int cents = 0;
    
    cout << "Enter an amount in cents: ";
    cin >> cents;
    
    int original_cents = cents;
    
    dollars = cents/cents_in_dollar;
    cents %= cents_in_dollar;
    
    quarters = cents/cents_in_quarter;
    cents %= cents_in_quarter;
    
    dimes = cents/cents_in_dime;
    cents %= cents_in_dime;
    
    nickels = cents/cents_in_nickel;
    cents %= cents_in_nickel;
    
    pennies = cents;
    
    cout << "\nFor " << original_cents << " cents, you should receive change as follows: " << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickles: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
    
    
    return 0;
}