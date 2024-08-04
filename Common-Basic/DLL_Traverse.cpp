#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> LinkedList = {1, 2, 3};

    // Forward traversal
    cout << "Forward traversal: ";
    for (int val : LinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    // Backward traversal
    cout << "Backward traversal: ";
    for (auto it = LinkedList.rbegin(); it != LinkedList.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
