//迭代法
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre=nullptr,*node=head;
        while(node)
        {
            ListNode *s=node->next;
            node->next=pre;
            pre=node;
            node=s;
        }
        return pre;
    }
};
//递归法
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode *newhead=reverseList(head->next);
        head->next->next=head;
        head->next=nullptr;
        return newhead;

    }
};
