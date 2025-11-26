#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string str;
    cin >> str;
    vector<int> freq(26);


    for (int i=0; i<str.length(); i++) {
        freq[str[i]-'a']++;
    }
    int i=0;
    int firstCount = freq[i];
    while(firstCount == 0) {
        firstCount = freq[i];
        i++;
    }
    bool sameNumLetters = true;
    for (int i=0; i<26 && sameNumLetters; i++) {
        if (freq[i] != 0 && freq[i] != firstCount) {
            sameNumLetters = false;
        }
    }
    
    for (int i=0; i<26; i++) {
        freq[i]=0;
    }
    
   for (int a=0; a<str.length()&&!sameNumLetters; a++) {
        string removedLetter="";
        sameNumLetters=true;
        for (int j=0; j<str.length();j++) {
            if (j!=a) {
                removedLetter+=str[j];
            }
        }
        
        for (int i=0; i<removedLetter.length(); i++) {
            freq[removedLetter[i]-'a']++;
        }
        i=0;
        int firstCount = freq[i];
        while(firstCount == 0) {
            firstCount = freq[i];
            i++;
        }
        for (int i=0; i<26 && sameNumLetters; i++) {
            if (freq[i] != 0 && freq[i] != firstCount) {
                sameNumLetters = false;
            }
        }
        
        for (int i=0; i<26; i++) {
            freq[i]=0;
        }
        
    }
    if (sameNumLetters) {
        cout << "true"<<endl;
    }else {
        cout << "false"<<endl;

    }

    return 0;
}