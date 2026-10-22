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
		int num, i, size;

        size = 0;
		curr = head;
		while (curr != nullptr)
		{
			curr = curr -> next;
			size++;
		}
		num = 0;
		curr = head;
		for (i = 0; i < size; i++)
		{
			num = 2 * num + curr -> val;
			curr = curr -> next; 
		}
		return (num);
    }
};