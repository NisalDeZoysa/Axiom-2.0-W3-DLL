#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> doublyLinkedList = {1, 2, 3};

    // Forward traversal
    cout << "Forward traversal: ";
    for (int val : doublyLinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    // Backward traversal
    cout << "Backward traversal: ";
    for (auto it = doublyLinkedList.rbegin(); it != doublyLinkedList.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
