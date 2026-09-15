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
//     ListNode* deleteMiddle(ListNode* head) {
//         int siz = size(head);
//         ListNode* temp = head;
//         if(siz == 1)
//         {
//             return NULL;
//         }
//         if(head == NULL)
//         {
//             return head;
//         }
//         for(int i = 0; i < (siz/2)-1; i++)
//         {
//             temp = temp->next;
//         }
//         if(temp->next == NULL)
//         {
//             ListNode* deletenode = temp->next;
//             temp->next = NULL;
//             delete deletenode;
//             return head;
//         }
//         ListNode* deletenode = temp->next;
//         temp->next = temp->next->next;
//         delete deletenode;
        
//         return head;

//     }
// };