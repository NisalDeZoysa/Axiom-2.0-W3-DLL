#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> LinkedList = {1, 2, 3, 4, 5, 6, 79, 334, 3};

    // Delete the last element
    LinkedList.pop_back();

    // Display list
    for (int val : LinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
