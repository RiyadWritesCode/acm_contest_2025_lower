#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int numTriangles;
    cin >> numTriangles; // excluding reference
    double legRef, hypRef;
    cin >> legRef >> hypRef;

    // vector<pair<int,int>> arr(numTriangles); // {{leg, hyp}, {leg, hyp}}
    for (int i=0; i<numTriangles; i++) {
        double leg, hyp;
        cin >> leg >> hyp;
        bool similar = true;
        if (acos(leg/hyp) != acos(legRef/hypRef)) {
            similar = false;
        }
         if (similar == true) {
        cout << "True" << " ";
    } else {
        cout << "False" << " ";
    }
    }
    cout << endl;

   



    return 0;
}