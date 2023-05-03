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
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==nullptr)
       return nullptr;

       ListNode* onceki = head;       //previous
       ListNode* suanki = head->next; //current

       while(suanki != nullptr)
       {
           if(onceki->val == suanki->val)
           {
               onceki->next = suanki->next;
               delete suanki;
               suanki = onceki->next;
           }
           else
           {
               onceki = suanki;
               suanki = onceki->next;
           }
       }
       return head;
    }
};
