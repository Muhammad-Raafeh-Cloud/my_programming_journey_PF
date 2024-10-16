#include <iostream>
using namespace std;

int main()
{
    // List of drinks and their prices
    int drinkPrices[] = { 80, 80, 75, 79, 76 };
    string drinkNames[] = { "Pepsi", "Coke", "7up", "Sprite", "Fanta" };

    // Display available drinks
    cout << "Welcome to the vending machine. We have the following drinks:" << endl;
    cout << "Enter 1 for Pepsi, price = Rs. 80" << endl;
    cout << "Enter 2 for Coke, price = Rs. 80" << endl;
    cout << "Enter 3 for 7up, price = Rs. 75" << endl;
    cout << "Enter 4 for Sprite, price = Rs. 79" << endl;
    cout << "Enter 5 for Fanta, price = Rs. 76" << endl;

    // User selects a drink
    int choice;
    cout << "Which drink do you want? ";
    cin >> choice;

    if (choice < 1 || choice > 5) 
    {
        cout << "Invalid selection. Please choose a valid drink." << endl;
        return 0;
    }

    int drinkIndex = choice - 1;
    string selectedDrink = drinkNames[drinkIndex];
    int drinkPrice = drinkPrices[drinkIndex];

    // User enters the amount of money they have
    int amount;
    cout << "Enter the amount you have: ";
    cin >> amount;

    // Check if the user has enough money
    if (amount >= drinkPrice) 
    {
        int remainingAmount = amount - drinkPrice;
        cout << "You have selected " << selectedDrink << ", price = Rs. " << drinkPrice << "." << endl;
        cout << "Remaining amount after purchase: Rs. " << remainingAmount << endl;
    }
    else
    {
        cout << "Out of money, you cannot buy a " << selectedDrink << "." << endl;
    }
    
    system("pause");
    return 0;
}