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
		if (list1 == nullptr)
			return (list2);
		else if (list2 == nullptr)
			return (list1);
		ListNode* curr1, *curr2, *head, *tail;

		curr1 = list1;
		curr2 = list2;
		head = nullptr;
		tail = nullptr;
		if (curr1 -> val < curr2 -> val)
		{
			head = curr1;
			curr1 = curr1 -> next;
		}
		else
		{
			head = curr2;
			curr2 = curr2 -> next;
		}
		tail = head;
		while (curr1 != nullptr && curr2 != nullptr)
		{
			if (curr1 -> val < curr2 -> val || curr1 -> val == curr2 -> val)
			{
				tail -> next = curr1;
				curr1 = curr1 -> next;
				tail = tail -> next;
			}else if (curr2 -> val < curr1 -> val || curr2 -> val == curr1 -> val)
			{
				tail -> next = curr2;
				curr2 = curr2 -> next;
				tail = tail -> next;
			}
		}
		if (curr1 == nullptr)
			tail -> next = curr2;
		else if (curr2 == nullptr)
			tail -> next = curr1;
		return (head);
    }
};
