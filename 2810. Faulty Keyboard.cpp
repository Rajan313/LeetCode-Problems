class Solution {
public:
    string finalString(string s) {
        
        string k="",m="";
        for(auto i:s)
        {
            if(i=='i'){
                 
                m=m+k;
                reverse(m.begin(),m.end());
                k="";
            }else
                k=k+i;
             
        }
        
        m=m+k;
        return m;
        
    }
};