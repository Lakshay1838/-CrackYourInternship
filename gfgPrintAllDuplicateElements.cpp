#include<bits/stdc++.h>
using namespace std;
string printAllDuplicateElements(string &s){
    string ans;
    sort(s.begin(),s.end());
    for(size_t i=1;i<s.length();i++){
        if(s[i] == s[i-1]){
            int n=ans.size();
            if(ans.empty()){
                ans.push_back(s[i]);
            }
            else if(ans[n-1] != s[i]){
                ans.push_back(s[i]);
            }
        }
    }
    return ans;
}
int main()
{
    string s = "geeksforgeeks";
    // cout<<"dupliactes : "<<printAllDuplicateElements(s)<<endl;


    vector<string> test_cases = {
        "geeksforgeeks",
        "",
        "abcdef",
        "aabbcc",
        "aaaa"
    };
    
    for (string test_case : test_cases) {
        cout << "Input: \"" << test_case << "\"\n";
        cout << "Duplicates: " << printAllDuplicateElements(test_case) << "\n\n";
    }


    return 0;
}