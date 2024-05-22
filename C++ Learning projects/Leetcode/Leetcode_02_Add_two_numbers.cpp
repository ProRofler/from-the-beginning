
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}


};


#include <iostream>



class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};


void deleteList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }
}

int main(){

    ListNode * l1 = new ListNode(4, new ListNode(7, new ListNode(3, nullptr)));
    ListNode * l2 = new ListNode(5, new ListNode(2, new ListNode(4, nullptr)));

    Solution::addTwoNumbers(l1, l2);    


    deleteList(l1);
    deleteList(l2);

    return 0;
}