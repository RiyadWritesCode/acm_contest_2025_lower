#include <iostream>
#include <vector>
using namespace std;
int main() {
    int length;
    cin >> length;
    int num;
    cin >> num;
    vector<int> arr(length);
    for (int i=0; i<arr.size(); i++) {
        cin >> arr[i];
    }
     int count = 0;
    for (int i=0; i<arr.size(); i++) {

        for (int j=i; j<arr.size();j++){
            int sum=0;
            for (int a=i; a<=j; a++) {
                sum+=arr[a];
            }
            if (sum == num) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}