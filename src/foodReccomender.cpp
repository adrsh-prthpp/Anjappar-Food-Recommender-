#include <iostream>
#include "../header/foodReccomender.h"

using namespace std;

string foodReccomender::checkCategory(){
    cout << "what type of dish are you craving today?" << endl;
    cout << "select from our options!(please type the category exactly as it's listed)" << endl;
    cout << "Soups/n" << "Appetizers/n" << "Dosa / Steam Zone/n" << "Indo-Chinese/n" 
         << "Biriyani/n" << "Thali/n" << "Goat/n" << "Chicken/n" << "Seafood/n" 
         << "Veg Curry/n" << "Breads/n" << "Dessert/n" << "non-alcoholic beverages/n";

    string categoryOption;
    cin >> categoryOption;

    return categoryOption;
}

int foodReccomender::checkCusine() {
    cout << "Are you looking for veg, non-veg, or both food options?" << endl;
    cout << "enter 1 for veg, 2 for non-veg, & 3 for both" << endl;

    int cusineOption; 
    cin >> cusineOption;

    return cusineOption;
}

int foodReccomender::checkSpice() {
    cout << "Please enter your preferred spice level from 1-5" << endl;

    int spiceOption; 
    cin >> spiceOption;

    return spiceOption;
}