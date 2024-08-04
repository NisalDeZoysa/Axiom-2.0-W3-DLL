#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> doublyLinkedList = {2, 3, 4};

    // Insert at the beginning
    doublyLinkedList.push_front(1);

    // Display list
    for (int val : doublyLinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
