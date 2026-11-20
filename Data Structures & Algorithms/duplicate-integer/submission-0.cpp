class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int value=0;value<nums.size();value++){
            map[nums[value]]+=1;
            if(map[nums[value]]>1){
                return true;
            }
        }
        return false;
        
        
    }
};