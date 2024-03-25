#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct MenuItem {
    string dishName;
    string description;
    string cuisine;
    int spiceLevel;
    string category;
};

vector<MenuItem> readMenu(const string& filename);
MenuItem suggestMenuItem(const vector<MenuItem>& menu, const string& category, const string& cuisine, int spiceLevel);
