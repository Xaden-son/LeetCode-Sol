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
    ListNode* middleNode(ListNode* head) 
	{
		ListNode* curr;

		int i, size;

		curr = head;
		size = 0;
		while (curr != nullptr)
		{
			curr = curr -> next;
			size++;	// Sizeof my list.
		}
		curr = head;		
		for (i = 0; i < size / 2; i++)
			curr = curr -> next;
		return (curr);	
    }
};
