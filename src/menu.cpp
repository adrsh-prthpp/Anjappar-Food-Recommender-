#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "../header/menu.h"

vector<MenuItem> readMenu(const string& filename) {
    vector<MenuItem> menuItems;
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        return menuItems;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string dishName, description, cuisine, category;
        int spiceLevel;
        getline(ss, dishName, ',');
        getline(ss, description, ',');
        getline(ss, cuisine, ',');
        ss >> spiceLevel;
        getline(ss, category, ',');

        menuItems.push_back({dishName, description, cuisine, spiceLevel, category});
    }

    return menuItems;
}

MenuItem suggestMenuItem(const vector<MenuItem>& menu, const string& category, const string& cuisine, int spiceLevel) {
    vector<MenuItem> matchingItems;
    for (const auto& item : menu) {
        if (item.category == category && (cuisine == "both" || item.cuisine == cuisine) && item.spiceLevel == spiceLevel) {
            matchingItems.push_back(item);
        }
    }

    // Choose a random item from matching items
    if (!matchingItems.empty()) {
        int randomIndex = rand() % matchingItems.size();
        return matchingItems[randomIndex];
    } else {
        return {"No item found", "", "", 0, ""}; // Return default item if no match found
    }
}