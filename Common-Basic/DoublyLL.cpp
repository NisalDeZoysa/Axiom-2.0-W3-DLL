#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> LinkedList;

    // Insert elements
    LinkedList.push_back(1);
    LinkedList.push_back(2);
    LinkedList.push_back(3);

    cout << "Forward traversal: ";
    for (int val : LinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    /*
    cout << "Backward traversal: ";
    for (auto it = LinkedList.rbegin(); it != LinkedList.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    */

    cout << "Backward traversal: ";
    list<int> reversedList(LinkedList); // Copying the LL
    reversedList.reverse();             // Revers that LInekd List.. Not the original One
    for (int val : reversedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}