class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> stringone;
        unordered_map<char,int> stringtwo;

        if(s.length()!=t.length()){
            return false;
        }

        for(int character=0;character<s.length();character++){
            stringone[s[character]]+=1;
            stringtwo[t[character]]+=1;
        }
        for(int character=0;character<s.length();character++){
            if(stringone[s[character]]!=stringtwo[s[character]]){
                return false;
            };
        }
        return true;


    }
};
