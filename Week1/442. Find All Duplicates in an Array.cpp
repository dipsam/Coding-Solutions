class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
    //vector to have the elements which occurs twice
	vector <int> ans;
	//looping through the vector
	for (int i = 0; i < nums.size(); i++) {

		//finding the index using absolute value
		int index = abs(nums[i]) - 1;

		int value = nums[index];

		//checking if it is negative then adding this to our answer
		if (value < 0) {
			ans.push_back(index + 1);
		}
		//marking its presence if it is not present
		else {
			nums[index] *= -1 ;
		}

	}
	return ans;
    }
};