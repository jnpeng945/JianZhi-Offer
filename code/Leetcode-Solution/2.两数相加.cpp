/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        int c = 0;      // 设置进位
        while(l1 || l2 || c) {
            if (l1) c += l1->val, l1 = l1->next;
            if (l2) c += l2->val, l2 = l2->next;
            cur = cur->next = new ListNode(c % 10);
            c /= 10;
        }
        return dummy->next;
    }
};
// @lc code=end

