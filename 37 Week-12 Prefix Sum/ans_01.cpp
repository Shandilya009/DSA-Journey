class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& arr) {
        nums = arr;   
    }
    
    int sumRange(int left, int right) {
        vector<int> temp = nums;
        for(int i=left+1;i<=right;i++){
        temp[i]+=temp[i-1];
        }
        return temp[right];
    }

};
