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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
		ListNode* curr1, *curr2, *temp;

		curr1 = list1;
		curr2 = list2;
		while (curr1 != nullptr && curr2 != nullptr)
		{
			temp = curr1 -> next;
			if (curr1 -> val < curr2 -> val || curr1 -> val == curr2 -> val)
			{
				curr1 -> next = curr2;
				curr1 = curr1 -> next;
				curr2 = curr2 -> next;
			}else if (curr2 -> val < curr1 -> val || curr2 -> val == curr1 -> val)
			{
				curr2 -> next = curr1;
				curr2 = curr2 -> next;
				curr1 = curr1 -> next;
			}
			curr1 -> next = temp;
		}

		return (curr1);
    }
};
