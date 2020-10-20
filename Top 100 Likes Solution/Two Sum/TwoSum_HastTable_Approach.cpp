#include<bits/stdc++.h>

vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> m;

	for(int i = 0; i < nums.size(); i++){
	    if(m.count(target - nums[i]))
	        return {i, m[target - nums[i]]};
	    else
	        m[nums[i]] = i;
	}
	return {-1, -1};
}

int main(){
	vector<int> nums = {2, 5, 8, 3, 1};
	int target = 13;

	vector<int> result = twoSum(nums, target);
	cout<<"First Index: "<<result[0]<<"\nSecond Index: "<<result[1]<<"\n";
	return 0;
}