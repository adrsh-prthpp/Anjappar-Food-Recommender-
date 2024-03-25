#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "../header/foodReccomender.h"
#include "../header/menu.h"

using namespace std;

int main() {


    vector<MenuItem> menu = readMenu("menu.csv");

    // Example usage
    string category = "Dosa / Steam Zone";
    string cuisine = "veg";
    int spiceLevel = 2;

    MenuItem suggestedItem = suggestMenuItem(menu, category, cuisine, spiceLevel);

    // Print suggested menu item
    cout << "Suggested Menu Item:" << endl;
    cout << "Dish Name: " << suggestedItem.dishName << endl;
    cout << "Description: " << suggestedItem.description << endl;
    cout << "Cuisine: " << suggestedItem.cuisine << endl;
    cout << "Spice Level: " << suggestedItem.spiceLevel << endl;
    cout << "Category: " << suggestedItem.category << endl;

    return 0;
}
