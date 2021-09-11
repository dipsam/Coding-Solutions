class Solution {
public:
    void reverse(vector <int>& nums, int start, int end ){
        
        //loop to reverse the array
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
        
    }
    
    void rotate(vector<int>& nums, int k) {
        
        int size=nums.size();
        //finding the value of k
        k = k%size;
        
        //rotate first half till k
        reverse(nums,0,size-k-1);
        //rotate second part after k
        reverse(nums,size-k,size-1);
        //rotate full array  
        reverse(nums,0,size-1);
        
        
    }
};