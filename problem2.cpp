#include <vector>
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    vector<int> arr(num);
    int maxSum = arr[0];
    int currentSum=arr[0];
    for (int i=1; i<num;i++) {
        cin >> arr[i];
        currentSum+=arr[i];
        if (i>=3) {
            currentSum-=arr[i-3];
        }
        if (i>=3 && currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    cout << maxSum << endl;
    return 0;
}