#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int ans=size/2;
        return nums[ans] ;
    }
};