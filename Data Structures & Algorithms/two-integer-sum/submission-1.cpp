class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> tracker;
        for(int number=0;number<nums.size();number++){
            tracker[nums[number]]=number;
        }
        for(int number=0;number<nums.size();number++){
            if(tracker.find(target-nums[number])!=tracker.end()){
                if (tracker[target-nums[number]]==number){
                    continue;
                }
                return{number,tracker[target-nums[number]]};
            }
        }
        return {};
    }
};
