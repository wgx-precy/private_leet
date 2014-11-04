//Remove Nth Node From End of List

/**
 * Defination for singly-linked list
 * struct ListNode {
 *      int val;
 *      ListNode *next;
 *      ListNode(int x) : val(x), next(NULL) {}
 * };
 */


 class Solution {
 public:
    ListNode * removeNthFromEnd(ListNode *head, int n) {
        int length = 0;
        ListNode * iterator;
        iterator = head;
        while(iterator) {
            length++;
            iterator = iterator->next;
        }
        int position = length - n;
        if(length>=0) {
            if(lenght==0) {
                iterator = head;
                head = head->next;
                delete iterator;
                return head;
            } else {
                while(position > 2 ) {
                    iterator = head;
                    iterator = iterator->next;
                    position--;
                }
                ListNode *tmp;
                tmp = iterator->next;
                iterator->next = iterator->next->next;
                delete tmp;
                return head;
            }
        } else {
            return head;
        }
    }
 };
