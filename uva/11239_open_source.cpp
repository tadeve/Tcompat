#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

bool cmp(const pair<int, string>& p1, const pair<int, string>& p2) {
    if (p1.first != p2.first)
        return p1.first > p2.first;
    return strcmp(p1.second.c_str(), p2.second.c_str()) < 0;
}

int main(void) {
    string line;
    vector<string> projects;
    set<string> students;
    map<string, set<string>> stdnt_projects;
    map<string, set<string>> projects_stdnts;
    map<string, int> stdnts_prj_cnt;
    do {
        getline(cin, line);
        if (line == "0")
            break;
        else if (line == "1") {
            for (set<string>::iterator it = students.begin();
                 it != students.end(); it++) {
                if (stdnt_projects[(*it)].size() > 1) {
                    int cnt = 0;
                    vector<string> temp;
                    for (map<string, set<string>>::iterator itt =
                             projects_stdnts.begin();
                         itt != projects_stdnts.end(); itt++) {
                        if (itt->second.find(*it) != itt->second.end()) {
                            cnt++;
                            temp.push_back(itt->first);
                        }
                    }
                    if (cnt > 1) {
                        for (int i = 0; i < cnt; i++)
                            projects_stdnts[temp[i]].erase(*it);
                    }
                }
            }
            vector<pair<int, string>> temp;
            for (int i = 0; i < projects.size(); i++) {
                temp.push_back(make_pair(projects_stdnts[projects[i]].size(),
                                         projects[i]));
            }
            sort(temp.begin(), temp.end(), cmp);
            for (int i = 0; i < temp.size(); i++) {
                cout << temp[i].second << ' ' << temp[i].first << endl;
            }
            projects.clear();
            projects_stdnts.clear();
            stdnts_prj_cnt.clear();
        } else if (isupper(line[0]))
            projects.push_back(line);
        else {
            stdnt_projects[line].insert(projects[projects.size() - 1]);
            stdnts_prj_cnt[line]++;
            students.insert(line);
            projects_stdnts[projects[projects.size() - 1]].insert(line);
        }

    } while (true);
    return 0;
}
