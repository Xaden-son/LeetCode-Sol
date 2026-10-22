struct ListNode
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#include <vector>
#include <cmath>
using namespace std;
class Solution 
{
public:
    int getDecimalValue(ListNode* head) 
    {
		ListNode* curr;
		int num, i, size, power;
		vector<int> numbers;

		i = 0;
		curr = head;
		while (curr != nullptr)
		{
			numbers.push_back(curr -> val);
			curr = curr -> next;
		}
		num = 0;
		power = 0;
		size = numbers.size();
		for (i = size - 1; 0 <= i; i--)
		{
			num = (numbers[i] * pow(2, power)) + num;
			power++; 
		}
		return (num);
    }
};