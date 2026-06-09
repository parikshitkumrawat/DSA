#include<iostream>
using namespace std;
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        vector<int> s=nums;
        sort(s.begin(),s.end());
        int e=n-1;
        int m=(n-1)/2;
        int i=0;
        while(i<n){
            nums[i]=s[m];
            i+=2;
            m--;
        }
        i=1;
        while(i<n){
            nums[i]=s[e];
            i+=2;
            e--;
        }
    }
};