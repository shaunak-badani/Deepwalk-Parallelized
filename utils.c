#include <utils.h>

using namespace std;

void PrintAdjList(vector<vector<int>> adj) {
    for(int i = 0; i < adj.size(); i++) {
        cout << i + 1 << "-> ";
        for(int j = 0; j < adj[i].size() ; j++) {
            cout << adj[i][j]  +  1<< ",";
        }
        cout << endl;
    }
}

vector<vector<int>> ConvertCsvToAdjList(string filename) {
    // READING FROM FILE
    ifstream csv (filename);
    string line;
    char *ch;
    int val, v;
    vector<vector<int>> adj;
    if(csv.is_open()) {
        v = 1;
        while(getline(csv, line)) {
            char *cstr = &line[0];
            vector<int> tmp;

            // SPLITTING BASED ON COMMA
            int j = 0;
            ch = strtok(cstr, ",");
            while(ch != NULL) {
                val = atoi(ch);
                if(val)
                    tmp.push_back(j);
                j++;
                ch = strtok(NULL, ",");
            }
            adj.push_back(tmp);
            v++;
        }
        csv.close();
    }
    else 
        cout << "Unable to open file" << endl;
    const int no_of_nodes = v;
    return adj;
    
    // PrintAdjList(adj);
}