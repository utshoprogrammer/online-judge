#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int size(ListNode* head)
//     {
//         int count_siz = 0;
//         ListNode* temp = head;
//         while(temp != NULL)
//         {
//             count_siz++;
//             temp = temp->next;
//         }
//         return count_siz;
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int siz = size(head);
//         ListNode* temp = head;
//         if(siz == 1)
//         {
//             delete head;
//             return NULL;
//         }
//         if(head == NULL)
//         {
//             return head;
//         }
//         if(n > siz)
//         {
//             return head;
//         }
//         if(siz == n)
//         {
//             head = temp->next;
//             delete temp;
//             return head;
//         }
//         for(int i = 0; i < (siz-n)-1;i++)
//         {
//             temp = temp->next;
//         }
//         // if(temp->next == NULL)
//         // {
//         //     temp->next = NULL;
//         //     return head;
//         // }
//         ListNode* deletenode = temp->next;
//         temp->next = temp->next->next;
//         delete deletenode;

//         return head;
//     }
// };