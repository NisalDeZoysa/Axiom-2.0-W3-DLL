#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> LinkedList = {1, 2, 3};

    // Insert at the end
    LinkedList.push_back(4);

    // Display list
    for (int val : LinkedList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
