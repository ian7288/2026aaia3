//week11-1.cpp 學習計畫 Linked List 第一題
//LeetCode 21. Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode(999);
        ListNode*now=ans;
        while(list1!=nullptr||list2!=nullptr){
            if(list1==nullptr){
                now->next=list2;
                break;
            } else if(list2==nullptr){
                now->next=list1;
                break;
            } else{
                if(list1->val < list2->val){
                    now->next=new ListNode(list1->val);
                    now=now->next;
                    list1=list1->next;
                }else{
                    now->next=new ListNode(list2->val);
                    now=now->next;
                    list2=list2->next;
                }
            }
        }
        return ans->next;
        //ListNode*now=list1;
        //while(now!=nullptr){
        //    cout<<now->val<<" ";
        //    now=now->next;
        }
        //ListNode*ans = new ListNode(999);//題目要吐出ListNode*我們就宣告它
        //return ans;
};
