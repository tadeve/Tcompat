#include <algorithm>
#include <ctype.h>
#include <iostream>
#include <iterator>
#include <map>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>


using namespace std;
int main() {
    int n, m;
    scanf("%d%d", &m, &n);
    map<string, int> ma;
    int disc;
    char job[18];
    for (int i = 0; i < m; i++) {
        scanf("%s %d", job, &disc);
        ma[job] = disc;
    }
    // cout << ma["tarek"] << endl;
    string line;
    int salary;
    for (int j = 0; j < n; j++) {
        salary = 0;
        string tempx;
        do {
            getline(cin, line);
            tempx = line;
            string::iterator end_pos =
                std::remove(tempx.begin(), tempx.end(), ' ');
            tempx.erase(end_pos, tempx.end());
            stringstream ss(line);
            string temp;
            while (ss >> temp)
                salary += ma[temp];
        } while (tempx != ".");
        printf("%d\n", salary);
    }

    system("pause");
    return 0;
}
