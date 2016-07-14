#include <iostream>
#include <cstdio> 
#include <string> 
#define is_alpha(x) (x>='a' && x<='z') || (x>='A' && x <= 'Z')
using namespace std;
int main(void) {
	string s;
        while(getline(cin,s)){
                int n_words = 0;
                int i = 0;
                while(i<s.length()){
                        if(is_alpha(s[i]))
                                n_words++;
                        while((i<s.length()) && is_alpha(s[i])) i++;
                        while((i<s.length()) && !(is_alpha(s[i]))) i++;
                }
                printf("%d\n",n_words);
        }
        return 0;
}
