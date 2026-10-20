struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};


// I submitted just this code block.
#include <vector>
using namespace std;
class Solution 
{
	public:
    bool isPalindrome(ListNode* head) 
	{
		ListNode* curr;
		vector<int> numbers;
		int i, j, size;

		i = 0;
		curr = head;
		while (curr != nullptr)
		{
			numbers.push_back(curr -> val);
			curr = curr -> next;
			i++;
		}
        size = numbers.size();
		j = numbers.size() - 1;
		for (i = 0; i < size / 2; i++, j--)
		{
			if (numbers[i] != numbers[j])
				return (false);
		}
		return (true);
    }
};
//#include <iostream>
/*
void	printList(ListNode* head)
{
	ListNode* curr = head;

	cout << "[";
	while (curr != nullptr)
	{
		cout << curr -> val; 
		if (curr -> next != nullptr)
			cout << ",";
		curr = curr -> next;
	}
	cout << "]";
}
*/

/* For testing the solution.
int main(void)
{
	ListNode* head = new ListNode(1);
	ListNode* first = new ListNode(2);
	ListNode* second = new ListNode(3);
	ListNode* third = new ListNode(2);
	ListNode* fourth = new ListNode(1);

	head -> next = first;
	first -> next = second;
	second -> next = third;
	third -> next = fourth;

	printList(head);

	cout << endl;

	Solution sol;

	cout << sol.isPalindrome(head);
	return (0);

}
*/
