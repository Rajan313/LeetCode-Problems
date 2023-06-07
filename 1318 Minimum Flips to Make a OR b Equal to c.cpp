class Solution {
public:
    string decToBinary(int n)
    {  //Conversion of number into binary
    string str="";
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            str='1'+str;
        else
            str='0'+str;
    }
   
    return str;
    }
    int minFlips(int a, int b, int c) {
       

        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
      

        string na=decToBinary(a),nb=decToBinary(b),nc=decToBinary(c);
         int count=0,limit=floor(log2(max(c,max(a,b))))+1;
       
        for(int i=0;i<limit;i++){
            if(nc[i]=='0'){
                if(na[i]!='0')
                  count++;
            
                if(nb[i]!='0')
                 count++;

            }
            else{
                if(na[i]=='0'&&nb[i]=='0')
                  count++;
            }
        }
      
        return count;

    }
};