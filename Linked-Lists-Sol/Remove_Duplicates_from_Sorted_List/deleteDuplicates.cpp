//#include <iostream>
//using namespace std;

/*
struct ListNode 
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

// Uploaded this block.
class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if (head == nullptr)
            return (head);
        
        ListNode* curr = head;
        while (curr -> next != nullptr)
        {
            if (curr -> val == curr -> next -> val)
                curr -> next = curr -> next -> next;
            else 
                curr = curr -> next;
        }
        return (head);
    }
};
/*
void    printList(ListNode* head)
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

// I used for testing.
 
int main (void)
{
    ListNode *head = new ListNode();
    
    Solution sol;
    
    cout << "before: ";
    printList(head);

    cout << endl;

    head = sol.deleteDuplicates(head);

    printList(head);
    return (0);
}
*/
