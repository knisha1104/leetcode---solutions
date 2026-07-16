class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       vector<int> freq1(26);
       vector<int> window(26);

       for(char ch:s1 ){
        freq1[ch-'a']++;
       }
       int left = 0;

       for(int right = 0; right < s2.size(); right++){
        window[s2[right]-'a']++;

        if(right - left +1 > s1.size()){
            window[s2[left]-'a']--;
            left++;
        }

        if(right - left + 1 == s1.size() && window == freq1){
            return true;
        }
    }
        return false;
    }
};