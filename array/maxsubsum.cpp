#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Kadane's Algorithm to find maximum subarray sum
int maxSubarraySum(vector<int>& arr) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxSubarraySum(arr);
    cout << "Maximum subarray sum is: " << result << endl;

    return 0;
}
