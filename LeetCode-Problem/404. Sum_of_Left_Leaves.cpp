#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int sum = 0;
//     void sum_left_leaf(TreeNode* root)
//     {
//         if(root == NULL) return;
//         if(root->left)
//         {
//             // checking if the left child is a leaf or not.
//             if(root->left->left == NULL && root->left->right == NULL)
//             {
//                 sum += root->left->val;
//             }

//         }
//         sum_left_leaf(root->left);
//         sum_left_leaf(root->right);
//     }
//     int sumOfLeftLeaves(TreeNode* root) {
//         // if(root == NULL)
//         // {
//         //     return 0;
//         // }
//         // if(root->left == NULL && root->right == NULL)
//         // {
//         //     return 0;
//         // }
//         // if(root->left == NULL || root->right == NULL)
//         // {
//         //     sum += root->val;
//         // }
//         // int l = sumOfLeftLeaves(root->left);
//         // int r = sumOfLeftLeaves(root->right);
//         sum_left_leaf(root);
//         return sum;
//     }
// };