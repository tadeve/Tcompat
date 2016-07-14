/*
From UVA
"https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1998"
*/
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  // freopen("logfile.txt", "w", stdout);
  int N, M;
  while (cin >> N) {
    int temp;
    vector<int> books;
    int book1 = 0, book2 = 1000002;
    for (int i = 0; i < N; i++) {
      cin >> temp;
      books.push_back(temp);
    }
    sort(books.begin(), books.end());
    cin >> M;
    int p1 = 0, p2 = 1;
    int len = books.size();
    for (int i = 0; i < len; i++) {
      for (int j = 0; j < len; j++) {
        if (i != j) {
          if (books[i] + books[j] == M) {
            bool flag = max(books[i], books[j]) - min(books[i], books[j]) <
                        book2 - book1;
            if (flag) {
              book1 = min(books[i], books[j]);
              book2 = max(books[i], books[j]);
            }
          } else if (books[i] + books[j] > M) {
            break;
          }
        }
      }
    }
    cout << "Peter should buy books whose prices are " << book1 << " and "
         << book2 << "." << endl
         << endl;
  }
  // system("pause");
  return 0;
}
