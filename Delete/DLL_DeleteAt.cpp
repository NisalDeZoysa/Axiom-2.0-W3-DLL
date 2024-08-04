#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> doublyLinkedList = {1, 2, 3, 4, 5};

    // Delete at a specific position (3rd position)
    auto it = doublyLinkedList.begin();
    advance(it, 2); // Move iterator to the 3rd position
    doublyLinkedList.erase(it);

    // Display list
    for (int val : doublyLinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
