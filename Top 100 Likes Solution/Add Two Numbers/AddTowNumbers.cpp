#include<bits/stdc++.h>

using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int val){
            this->val = val;
            this->next = NULL;
        }
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0);
    ListNode *p = l1, *q = l2, *curr = dummyHead;
    int carry = 0;
    while (p != NULL || q != NULL) {
        int x = (p != NULL) ? p->val : 0;
        int y = (q != NULL) ? q->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        if (p != NULL) p = p->next;
        if (q != NULL) q = q->next;
    }
    if (carry > 0) {
        curr->next = new ListNode(carry);
    }
    return dummyHead->next;
}

int main(){
    ListNode* l1 = new ListNode(0);
    l1->next = new ListNode(1);

    ListNode* l2 = new ListNode(4);
    l2->next = new ListNode(3);

    ListNode* result = addTwoNumbers(l1, l2);
    cout<<"Sum: "<<result->next->val<<result->val<<"\n";
    return 0;
}