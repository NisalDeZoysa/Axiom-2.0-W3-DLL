#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> doublyLinkedList = {1, 2, 3};

    // Insert at the end
    doublyLinkedList.push_back(4);

    // Display list
    for (int val : doublyLinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
