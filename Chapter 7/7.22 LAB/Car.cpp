#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

// TODO: Implement SetPurchasePrice() function
void Car::SetPurchasePrice(int price) {
   purchasePrice = price;
}

int Car::GetPurchasePrice() const {
   return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}


void Car::PrintInfo() {

   cout << fixed << setprecision(0);

   cout << "Car's information:" << endl;
   cout << "  Model year: " << modelYear << endl;
   cout << "  Purchase price: $" << purchasePrice << endl;
   cout << "  Current value: $" << currentValue << endl; 
}