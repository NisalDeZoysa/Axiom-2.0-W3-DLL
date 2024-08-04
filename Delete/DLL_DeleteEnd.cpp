#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> doublyLinkedList = {1, 2, 3, 4, 5, 6, 79, 334, 3};

    // Delete the last element
    doublyLinkedList.pop_back();

    // Display list
    for (int val : doublyLinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
