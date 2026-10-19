#include <iostream>
using namespace std;
struct ListNode 
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
public:
    bool hasCycle(ListNode *head) 
	{
		int pos;
		cin >> pos;
		ListNode* tail = head;
		ListNode* curr = head;

		if (head == nullptr)
			return (false);
		if (pos == -1)
			return (false);
		while (tail -> next != nullptr)
			tail = tail -> next;		// Right now my node is the tail node.
		
		for (int i = 0; i <= pos; i++)
			curr = curr -> next;

		if (curr -> next != nullptr)
		{
			tail -> next = curr;
			return (true);
		}
		return (false);
    }
};

int main(void)
{
	ListNode* head = new ListNode(3);
	ListNode* first = new ListNode(2);
	ListNode* second	= new ListNode(0);
	ListNode* third = new ListNode(-4);

	head ->next =first;
	first ->next =second;
	second -> next = third;
	Solution sol;
	bool val = sol.hasCycle(head);
	cout << val << endl;
	return (0);
}