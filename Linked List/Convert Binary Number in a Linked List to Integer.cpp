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
    int getDecimalValue(ListNode* head) {
        string s = "";
        
        ListNode* t;
        t = head;
        
        while(t){
            s += ((t->val) + '0');
            t = t -> next;
        }
        
        int num = 0;
        int m = 1;
        for(int i = s.length()-1; i >= 0; i--){
            num += (s[i] - '0')*m;
            m *= 2;
        }
        
        return num;
    }
};
