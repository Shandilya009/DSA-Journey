
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>v=nums;
        for(int i=1;i<n;i++){
            v[i]+=v[i-1];
        }

        for(int i=0;i<n;i++){
            int l=(i==0?0:v[i-1]);
            int r =v[n-1]-v[i];
    if(l==r){
        return i;
    }

        }
        return -1;
        
    }
};
