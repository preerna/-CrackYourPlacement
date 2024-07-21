#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,long long int target) {
         if(nums.size() < 4)
            return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        long long int n = nums.size();
        for(long long int i= 0; i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(long long int j= i+1; j<n-2;j++ ){
                if(j>i+1 && nums[j]==nums[j-1]){
                    continue;
                }
                long long int tsum= target-(nums[i]+nums[j]);
                 long long int l= j+1,h=n-1;
                while(l<h){
                    if(nums[l]+nums[h]==tsum){
                        vector<int> oneans= {nums[i],nums[j], nums[l],nums[h]};
                        ans.push_back(oneans);
                        while(l<h && nums[l]==nums[l+1]){
                            l++;
                        }
                        while(l<h && nums[h]==nums[h-1]){
                            h--;
                        }
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h] < tsum){
                        l++;
                    }
                    else{
                        h--;
                    }
                }
            }
        }
        return ans;
    }
};