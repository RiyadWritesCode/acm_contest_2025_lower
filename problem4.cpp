#include <iostream>
#include <vector>
#include <string>
using namespace std;
int linearSearch(vector<string>& names, string name);

int main() {
    int numVotes;
    cin >> numVotes;
    if (numVotes==0) {
        cout << "NO WINNER" << endl;
    } else {
        vector<int> votes(numVotes,0);
        vector<string> names;
        for (int i=0; i<numVotes;i++) {
            bool inNamesArray = false;
            string name;
            cin >> name;
            for (int j=0; j<names.size(); j++) {
                if (name == names[j]) {
                    inNamesArray = true;
                }
            }
            // cout << inNamesArray<<endl;
            if (!inNamesArray) {
                names.push_back(name);
            }
            // for (int a=0; a<names.size(); a++)
            //     cout << names[a] << " ";
            // votes[linearSearch(names, name)]++;
            // cout << endl;
            votes.resize(names.size());
            // cout << linearSearch(names, name) << endl;
            votes[linearSearch(names, name)]++;
            
        }

        int maxIndex = 0;
        bool tie = false;
        for (int i=1; i<votes.size();i++) {
            if (votes[i] > votes[maxIndex]) {
                maxIndex = i;
            }
            if (votes[i] == votes[maxIndex]) {
                tie = true;
            }
        }
        if (!tie)
            cout << "WINNER " << names[maxIndex] <<" " << votes[maxIndex]<< endl;
        else {
            vector<int> tieIndexes;
            for (int i=0; i<votes.size();i++) {
                if (votes[maxIndex] == votes[i]) {
                    tieIndexes.push_back(i);
                }
            }
            string smallest = names[tieIndexes[0]];
            for (int i=1; i<tieIndexes.size();i++) {
                if (names[tieIndexes[i]] < smallest) {
                    smallest = names[tieIndexes[i]];
                }
            }
            cout << "WINNER " << smallest <<" " << votes[maxIndex]<< endl;
            
        }
        
    }

    return 0;
}

int linearSearch(vector<string>& names, string name) {
    int pos = -1;
    for (int i=0; i<names.size()&&pos==-1; i++) {
        if (names[i]==name) {
            
            pos=i;
        }
    }
    return pos;
}
