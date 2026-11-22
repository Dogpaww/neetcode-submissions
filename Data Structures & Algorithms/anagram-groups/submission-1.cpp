class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> string_map;

        for (int word=0;word<strs.size();word++){
            string key="";
            vector<int> freq(26,0);
            for(int letter=0;letter<strs[word].length();letter++){
                freq[strs[word][letter]-'a']+=1;
            }
            for(int num=0;num<freq.size();num++){
                key+=to_string(freq[num])+",";
            }
            string_map[key].push_back(strs[word]);
        }
        vector<vector<string>> result;
        for(auto& item:string_map){
            result.push_back(move(item.second));
        }
        return result;
    }
};