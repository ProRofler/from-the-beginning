#include <cmath>
#include <iostream>
#include <memory>

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    std::string val_1;
    std::string val_2;

    ListNode* current = l1;
    while (current != nullptr) {
      ListNode* next = current->next;
      val_1.insert(val_1.begin(), current->val + '0');
      current = next;
    }

    current = l2;
    while (current != nullptr) {
      ListNode* next = current->next;
      val_2.insert(val_2.begin(), current->val + '0');
      current = next;
    }

    int calc = std::stoi(val_1) + std::stoi(val_2);
    val_2 = std::to_string(calc);

    ListNode* result = nullptr;

    for (auto i = calc % 10; i > 0; i--) {
      if (i = calc % 10){
        ListNode* last = new ListNode(val_2.at(0)-'0');

      }

    }

    return result;
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

int main() {
  const auto sol = std::make_unique<Solution>;

  ListNode* l1 = new ListNode(4, new ListNode(7, new ListNode(3, nullptr)));
  ListNode* l2 = new ListNode(5, new ListNode(2, new ListNode(4, nullptr)));

  sol().get()->addTwoNumbers(l1, l2);

  deleteList(l1);
  deleteList(l2);

  return 0;
}