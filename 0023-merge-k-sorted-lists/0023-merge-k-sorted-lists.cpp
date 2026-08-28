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

    struct cmp {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;

        // Put the first node of every list into the heap
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != nullptr) {
                pq.push(lists[i]);
            }
        }

        ListNode dummy(0);
        ListNode* temp = &dummy;

        while (!pq.empty()) {

            // Get the smallest node
            ListNode* node = pq.top();
            pq.pop();

            // Add it to the answer
            temp->next = node;
            temp = temp->next;

            // Add the next node from the same list
            if (node->next != nullptr) {
                pq.push(node->next);
            }
        }

        return dummy.next;
    }
};