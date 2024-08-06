#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> LinkedList = {1, 2, 4, 5};

    // Insert at a specific position (3rd position)
    auto it = LinkedList.begin();
    advance(it, 2); // Move iterator to the 3rd position
    LinkedList.insert(it, 3);

    // Display list
    for (int val : LinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
