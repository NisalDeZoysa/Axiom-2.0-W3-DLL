#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> doublyLinkedList = {1, 2, 4, 5};

    // Insert at a specific position (3rd position)
    auto it = doublyLinkedList.begin();
    advance(it, 2); // Move iterator to the 3rd position
    doublyLinkedList.insert(it, 3);

    // Display list
    for (int val : doublyLinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
