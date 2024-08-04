#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> doublyLinkedList = {1, 2, 3, 4};

    // Delete the first element
    doublyLinkedList.pop_front();

    // Display list
    for (int val : doublyLinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
