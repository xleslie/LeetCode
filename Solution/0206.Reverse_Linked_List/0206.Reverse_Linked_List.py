#迭代法
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        pre,node=None,head
        while node:
            s=node.next
            node.next=pre
            pre,node=node,s
        return pre
#递归法
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        newhead=self.reverseList(head.next)
        head.next.next=head
        head.next=None
        return newhead
