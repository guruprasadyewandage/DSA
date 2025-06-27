#include<iostream>
#include<vector>
#include<algorithm>  // For sort()

using namespace std;

// Function to find pairs with given sum
void pairsum(vector<int> &arr, int key, vector<int> &ans) {
    int st = 0;
    int end = arr.size() - 1;

    while (st < end) {
        int ps = arr[st] + arr[end];
        if (ps < key) {
            st++;
        }
        else if (ps > key) {
            end--;
        }
        else {
            ans.push_back(arr[st]);
            ans.push_back(arr[end]);
            st++;     // Move both pointers to avoid infinite loop
            end--;
        }
    }
}

int main() {
    vector<int> ans;
    int tar;
    cout << "Enter target sum: ";
    cin >> tar;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array for two-pointer approach
    sort(arr.begin(), arr.end());

    pairsum(arr, tar, ans);

    if (ans.empty()) {
        cout << "No pairs found.\n";
    } else {
        cout << "Pairs with sum " << tar << " are:\n";
        for (int i = 0; i < ans.size(); i += 2) {
            cout << "(" << ans[i] << ", " << ans[i + 1] << ")\n";
        }
    }

    return 0;
}
