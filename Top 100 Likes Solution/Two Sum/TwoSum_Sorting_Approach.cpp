#include<bits/stdc++.h>

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> vec = nums;
    sort(vec.begin(), vec.end());
    
    int i = 0, j = nums.size()-1;
    int a = -1, b = -1;
    while(i < j){
        if(vec[i] + vec[j] == target){
            for(int k = 0; k < nums.size(); k++){
                if(nums[k] == vec[i] and a == -1)
                    a = k;
                else if(nums[k] == vec[j] and b == -1)
                    b = k;
                if(a != -1 and b != -1)
                    break;
            }
            break;
        }
        else if(vec[i] + vec[j] < target)
            i++;
        else
            j--;
    }
    return {a, b};
}

int main(){
    vector<int> nums = {2, 5, 8, 3, 1};
    int target = 13;

    vector<int> result = twoSum(nums, target);
    cout<<"First Index: "<<result[0]<<"\nSecond Index: "<<result[1]<<"\n";
    return 0;
}