#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> LinkedList = {2, 3, 4};

    // Insert at the beginning
    LinkedList.push_front(1);

    // Display list
    for (int val : LinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
