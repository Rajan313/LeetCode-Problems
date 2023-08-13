/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        
        int m=0;
        ListNode* trav=head;
        vector<int> k;
        while(trav!=NULL)
        {
            k.push_back(trav->val);
            trav=trav->next;
        }
        
        
        
       int s=k.size()-1;
        int c=0;
        while(s>=0)
        {
              int v=k[s]*2+c;
            if(v>9)
            {
                k[s]=v%10;
                c=1;
            }else{
                c=0;
                k[s]=v;
            }
            s--;
        }
        
        
        
        
        
        ListNode* header=NULL;
         s=k.size()-1;
        while(s>=0)
        {   
            ListNode* newNode=new ListNode(k[s]);
            newNode->next=header;
            header=newNode;
            s--;
        }
        if(c==1)
        {
             ListNode* newNode=new ListNode(c);
             newNode->next=header;
             header=newNode;
            
        }
        
        
        
        return header;
        
        
      
        
        
    }
};