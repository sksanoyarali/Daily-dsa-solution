class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        int differ=0;
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        for(int ind=0;ind<s1.size();ind++){
            if(s1[ind]!=s2[ind]){
                differ++;
                if(differ>2) return false;
            }
            freq1[s1[ind]-'a']++;
            freq2[s2[ind]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]) return false;
        }
        return true;
    }
};