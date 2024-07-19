class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;

        if(haystack.find(needle) != string::npos){
            ans = haystack.find(needle);
        }

        return ans;
    }
};