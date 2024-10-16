#include <iostream>
using namespace std;

int main()
{
    int units;
    double bill = 0.0;

    // User input for units consumed
    cout << "Enter units consumed: ";
    cin >> units;

    // Bill calculation based on consumption slabs
    if (units <= 40) 
    {
        bill = units * 8;
    }
    else if (units <= 100)
    {
        bill = (40 * 8) + (units - 40) * 10;
    }
    else if (units <= 160) 
    {
        bill = (40 * 8) + (60 * 10) + (units - 100) * 14;
    }
    else 
    {
        bill = (40 * 8) + (60 * 10) + (60 * 14) + (units - 160) * 18;
    }

    // Add 20% fuel surcharges and 15% Govt. Tax
    double fuel_surcharge = 0.20 * bill;
    double govt_tax = 0.15 * bill;

    // Calculate total bill
    double total_bill = bill + fuel_surcharge + govt_tax;

    // Display the result
    cout << "Total bill (including fuel surcharge and Govt. tax): Rs. " << total_bill << endl;

    system("pasue");
    return 0;
}