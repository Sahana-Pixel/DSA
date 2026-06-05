#include <iostream>
using namespace std;
#include<bits/stdc++.h>


int longestOnes(vector<int>& nums, int k) {
        int l = 0, zeros = 0, maxi = 0;

        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0) {
                zeros++;
            }

            while (zeros > k) {
                if (nums[l] == 0) {
                    zeros--;
                }
                l++;
            }

            maxi = max(maxi, r - l + 1);
        }

        return maxi;
    }

int main()
{
    vector<int>nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    longestOnes(nums, k);
    return 0;
}