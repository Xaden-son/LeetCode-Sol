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
    int getDecimalValue(ListNode* head) 
    {
		ListNode* curr;
		int num, i;

		num = 0;
		curr = head;
		for (i = 0; curr != nullptr; i++)
		{
			num = 2 * num + curr -> val;
			curr = curr -> next; 
		}
		return (num);
    }
};