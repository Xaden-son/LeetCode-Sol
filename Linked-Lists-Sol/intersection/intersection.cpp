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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
		ListNode* currA = headA;
		ListNode* currB = headB;
		int a,b, diff;

		a = 0;
		while (currA != nullptr)
		{
			currA = currA -> next;
			a++;
		}
		b = 0;
		while (currB != nullptr)
		{
			currB = currB -> next;
			b++;
		}
		if (a - b < 0)
			diff = b - a;
		else
			diff = a - b;

		currA = headA;
		currB = headB;
		if (a > b)
		{
			for (int i = 1; i <= diff; i++)
				currA = currA -> next;
		}
		else if (b > a)
		{
			for (int i = 1; i <= diff; i++)
				currB = currB -> next;
		}
		while (currA != currB)
		{
			currA = currA -> next;
			currB = currB -> next;
		}
		return (currA);
    }
};