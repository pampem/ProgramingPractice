//Leet today >> 1110
//Remove nth node from end of list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //fast and slowという配列を作る。
        ListNode *fast = head, *slow = head;

        for(int i=0; i<n; i++){
          fast = fast -> next;
        }

        if(!fast) return head -> next;

        while(fast -> next != nullptr){ //fastが後端についたら抜ける
          fast = fast -> next;
          slow = slow ->next;

        }
        slow -> next = slow -> next -> next; //これでheadのnextポインタが変わっているらしい。fastは？よくわからん。
        return head;


    }
};
