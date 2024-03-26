class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,1);
        int current=1;
        for(int i=0;i<nums.size();i++)
        {
            v[i]=current*v[i];
            current=current*nums[i];
        }
        current=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            v[i]=current*v[i];
            current=current*nums[i];
        }
        return v;
    }
};