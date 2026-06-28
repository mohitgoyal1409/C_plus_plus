#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Linked List Node
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Comparator for Min Heap
struct compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

// Merge K Sorted Lists
ListNode* mergeKLists(vector<ListNode*>& lists) {

    priority_queue<ListNode*, vector<ListNode*>, compare> pq;

    // Push first node of every list
    for(ListNode* head : lists) {
        if(head != NULL)
            pq.push(head);
    }

    ListNode* dummy = new ListNode(-1);
    ListNode* tail = dummy;

    while(!pq.empty()) {

        // Get smallest node
        ListNode* temp = pq.top();
        pq.pop();

        // Add to answer
        tail->next = temp;
        tail = tail->next;

        // Push next node of same list
        if(temp->next != NULL)
            pq.push(temp->next);
    }

    return dummy->next;
}

// Create Linked List
ListNode* createList(vector<int> arr) {

    if(arr.size() == 0)
        return NULL;

    ListNode* head = new ListNode(arr[0]);
    ListNode* tail = head;

    for(int i = 1; i < arr.size(); i++) {

        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }

    return head;
}

// Print Linked List
void printList(ListNode* head) {

    while(head != NULL) {

        cout << head->val << " ";

        head = head->next;
    }

    cout << endl;
}

int main() {

    // List 1
    vector<int> a = {1,4,5};

    // List 2
    vector<int> b = {1,3,4};

    // List 3
    vector<int> c = {2,6};

    ListNode* l1 = createList(a);
    ListNode* l2 = createList(b);
    ListNode* l3 = createList(c);

    vector<ListNode*> lists;

    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);

    ListNode* ans = mergeKLists(lists);

    cout << "Merged List : ";

    printList(ans);

    return 0;
}