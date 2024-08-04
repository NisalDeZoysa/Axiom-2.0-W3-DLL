#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> LinkedList = {1, 2, 3, 4, 5};
    int searchValue = 3;
    bool found = false;

    for (int val : LinkedList)
    {
        if (val == searchValue)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Value " << searchValue << " found in the list." << endl;
    else
        cout << "Value " << searchValue << " not found in the list." << endl;

    return 0;
}
