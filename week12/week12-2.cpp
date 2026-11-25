//week12-2.cpp 學習計畫 Linked List 第三題
//LeetCoed 2. Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode(999);
        ListNode*now=ans;
        int carry=0;
        while(l1!=nullptr||l2!=nullptr){
            if(l1!=nullptr)carry +=l1->val;
            if(l2!=nullptr)carry +=l2->val;
            now->next=new ListNode(carry%10);
            now=now->next;
            carry=carry/10;
            if(l1!=nullptr)l1=l1->next;
            if(l2!=nullptr)l2=l2->next;
        }
        if(carry)now->next=new ListNode(carry);
        return ans->next;
        //while(l1!=nullptr&&l2!=nullptr){
        //    int val=l1->val+l2->val+carry;
        //    now->next=new ListNode(val%10);
        //    now=now->next;
        //    carry=val/10;
        //    l1=l1->next;
        //    l2=l2->next;
        //}
        //return ans->next;
    }
};
