#include <iostream>
#include <vector>

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
		ListNode dummy(0);
		ListNode* tail = &dummy;
		int carry = 0;

		while (l1 != nullptr || l2 != nullptr || carry != 0) {
			int x = (l1 != nullptr) ? l1->val : 0;
			int y = (l2 != nullptr) ? l2->val : 0;

			int sum = x + y + carry;
			carry = sum / 10;

			tail->next = new ListNode(sum % 10);
			tail = tail->next;

			if (l1 != nullptr) l1 = l1->next;
			if (l2 != nullptr) l2 = l2->next;
		}

		return dummy.next;
	}
};

ListNode* buildList(const std::vector<int>& digits) {
	ListNode dummy(0);
	ListNode* tail = &dummy;

	for (int d : digits) {
		tail->next = new ListNode(d);
		tail = tail->next;
	}

	return dummy.next;
}

void printList(ListNode* head) {
	std::cout << "[";
	for (ListNode* cur = head; cur != nullptr; cur = cur->next) {
		std::cout << cur->val;
		if (cur->next != nullptr) {
			std::cout << ",";
		}
	}
	std::cout << "]\n";
}

void freeList(ListNode* head) {
	while (head != nullptr) {
		ListNode* next = head->next;
		delete head;
		head = next;
	}
}

int main() {
	ListNode* l1 = buildList({2, 4, 3});
	ListNode* l2 = buildList({5, 6, 4});

	Solution s;
	ListNode* result = s.addTwoNumbers(l1, l2);

	printList(result);

	freeList(l1);
	freeList(l2);
	freeList(result);

	return 0;
}
