#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> LinkedList = {1, 2, 3, 4};

    // Delete the first element
    LinkedList.pop_front();

    // Display list
    for (int val : LinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
