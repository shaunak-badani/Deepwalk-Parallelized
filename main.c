#include "utils.h"
#include <bits/stdc++.h>

int main() {
    // Fetch graph from input file
    vector<vector<int>> g = ConvertCsvToAdjList("karate.csv");
    
    PrintAdjList(g);
}