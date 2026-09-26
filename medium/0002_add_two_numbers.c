struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode head;
    struct ListNode* curr= &head;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry != 0) {
        struct ListNode* l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
        l3->next = NULL;
        
        if (l1 == NULL && l2 == NULL)   l3->val = carry;
        else if (l1 == NULL) {
            l3->val = l2->val + carry;
            l2 = l2->next;
        }
        else if (l2 == NULL) {
            l3->val = l1->val + carry;
            l1 = l1->next;
        } 
        else {
            l3->val = l1->val + l2->val + carry;
            l1 = l1->next;
            l2 = l2->next;
        }
        carry = l3->val / 10;
        l3->val = l3->val % 10;
        curr->next = l3;
        curr = curr->next;
    }
    return head.next;
}
