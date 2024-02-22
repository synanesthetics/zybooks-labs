// 2024 - 02 - 21

// program to output receipts for meals based on price and tip

#include <iostream>
#include <iomanip>
using namespace std;

// function to print receipt
void PrintReceipt(int num, double price, double tip, double tax) {
    
    double tipCost = price * tip;
    double taxCost = price * tax;
    double total = price + tipCost + taxCost;
    
    cout << "--- Reciept #" << num << " ---" << endl;
    cout << "Meal: $" << price << endl;
    cout << "Tip (" << (tip * 100) << "): $" << price * tip << endl;
    cout << "Tax (" << (tax * 100) << "): $" << price * tax << endl;
    cout << endl;
    cout << "Total: $" << total << endl;
    cout << "------------------" << endl;
    cout << endl;
}

int main() {

    double mealPrice;
    double tipPercentage;
    const double taxPercentage = 0.075; // 7.5% tax rate

    int receiptCount = 1; // variable to keep track of # of reciept

    // set double output to 2 decimal places ($n.xx)
    cout << fixed << setprecision(2);

    // get meal price once before loop to check if negative 
    cout << "Enter meal price:";
    cin >> mealPrice;
    cout << endl;

    while (mealPrice > 0) {

        cout << "Enter tip percentage (ex: 0.15 for 15%):";
        cin >> tipPercentage;
        cout << endl;

        // print receipt function called with reciept count, input meal price and tip percentage, as well as tax percent
        PrintReceipt(receiptCount, mealPrice, tipPercentage, taxPercentage);

        cout << "Enter meal price:";
        cin >> mealPrice;
        cout << endl;

        // iterate reciept count after every loop
        receiptCount++;

    }

    return 0;
}