// Given the head of a linked list, remove the nth node from the end of the list and return its head.


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p1,*p2;
        ListNode* dummy = new ListNode();
        dummy->next=head;
        
        p2=head;
        for(int i=0;i<n;i++)
            p2=p2->next;
        
        p1=dummy;
        while(p2!=nullptr)
        {
            p1=p1->next;
            p2=p2->next;
        }
        
        ListNode* temp = p1->next;
        p1->next=temp->next;
        delete temp;
        
        return dummy->next;
    }
};