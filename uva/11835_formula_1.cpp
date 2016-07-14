/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2935"
*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#define REP(i, b, n) for (int i = b; i < n; i++)
#define rep(i, n) REP(i, 0, n)

using namespace std;
int main(void) {
  // freopen("C:\\Users\\Tarek Ahmed\\Desktop\\log.txt", "w", stdout);
  int nRaces, nPilots;
  scanf("%d%d", &nRaces, &nPilots);
  while (nRaces != 0 && nPilots != 0) {
    int nScoringSystems;
    vector<vector<int> > pilotResults(nPilots, vector<int>(nRaces));
    rep(race, nRaces) {
      rep(pilot, nPilots) { scanf("%d", &pilotResults[pilot][race]); }
    }
    scanf("%d", &nScoringSystems);
    rep(system, nScoringSystems) {
      int topPlaces;
      scanf("%d", &topPlaces);
      vector<int> systemScores(topPlaces);
      vector<int> winners;
      vector<int> scores(nPilots, 0);
      rep(pos, topPlaces) { scanf("%d", &systemScores[pos]); }
      rep(pilot, nPilots) {
        rep(race, nRaces) {
          if (pilotResults[pilot][race] <= topPlaces) {
            scores[pilot] += systemScores[pilotResults[pilot][race] - 1];
          }
        }
      }
      int maxScore = 0;
      rep(pilot, nPilots) { maxScore = max(maxScore, scores[pilot]); }
      rep(pilot, nPilots) {
        if (scores[pilot] == maxScore) {
          winners.push_back(pilot + 1);
        }
      }
      int len = winners.size();
      rep(i, len) {
        if (i == (len - 1)) {
          cout << winners[i];

        } else {
          cout << winners[i] << " ";
        }
      }
      cout << endl;
    }
    scanf("%d%d", &nRaces, &nPilots);
  }
  return 0;
}
