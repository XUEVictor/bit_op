//////////////////////////////////////////////
/////////////////Question/////////////////////

// Given head which is a reference node to a singly-linked list.
// The value of each node in the linked list is either 0 or 1.
// The linked list holds the binary representation of a number.
// Return the decimal value of the number in the linked list.

//////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

int getDecimalValue(struct ListNode *head)
{
    int ans = head->val;
    head = head->next;
    int cnt = 0;
    while (head != NULL)
    {
        ans = ans << 1;
        ans = ans | head->val;
        printf("ans = %d \n", ans);
        head = head->next;
    }

    return 0;
}

int main()
{
    struct ListNode v1;
    v1.val = 1;
    struct ListNode v2;
    v2.val = 0;
    struct ListNode v3;
    v3.val = 1;

    v1.next = &v2;
    v2.next = &v3;
    v3.next = NULL;

    getDecimalValue(&v1);
}
