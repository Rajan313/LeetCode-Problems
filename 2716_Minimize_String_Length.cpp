class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> a;
        for(int i=0;i<s.length();i++)
            a.insert(s[i]);
        
        return a.size();
        
    }
};