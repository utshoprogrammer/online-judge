#include<bits/stdc++.h>
using namespace std;

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
//     ListNode* middleNode(ListNode* head) {
//         int siz = size(head);
//         if(siz == 1)
//         {
//             return head;
//         }
//         ListNode* temp = head;
//         for(int i = 0;i < (siz/2)-1;i++)
//         {
//             temp = temp->next;
//         }
//         return temp->next;
//     }
// };