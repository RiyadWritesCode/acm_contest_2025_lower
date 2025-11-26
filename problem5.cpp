#include <iostream>
#include <vector>
using namespace std;
bool isInArray(const vector<string> arr, string str);

int main() {
    int numF, numV;
    cin >> numF;
        vector<string> fruits(numF);

    for (int i=0; i<numF; i++) {
        cin >> fruits[i];
    }
    cin >> numV;
        vector<string> vegetables(numV);

    for (int i=0; i<numV; i++) {
        cin >> vegetables[i];
    }

    int numItems;
    cin >> numItems;
    vector<string> items(numItems);
    for (int i=0; i<numItems; i++) {
        cin >> items[i];
    }

    int numFruits=0, numVegetables=0;
    for (int i=0; i<numItems; i++) {
        if (isInArray(fruits,items[i])) {
            numFruits=numFruits+1;
        }
            
        else
            numVegetables=numVegetables+1;
    }

    cout << "Fruits: " << numFruits << ", Vegetables: " << numVegetables << endl;

    return 0;
}

bool isInArray(const vector<string> arr, string str) {
    bool is = false;
    for (int i=0; i<arr.size()&&!is; i++) {
        if (arr[i]==str) {
            is = true;
        }
    }
    return is;
}
