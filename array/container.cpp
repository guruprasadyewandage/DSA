#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while(left < right) {
        int ht = min(height[left], height[right]);
        int width = right - left;
        int area = ht * width;
        maxWater = max(maxWater, area);

        // Move the pointer pointing to the shorter line
        if(height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Max water container area: " << maxArea(height) << endl;
}

