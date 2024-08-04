#include <iostream>
#include <list>

int main()
{
    std::list<int> LinkedList;

    // Insert elements
    LinkedList.push_back(1);
    LinkedList.push_back(2);
    LinkedList.push_back(3);

    // Traverse and print elements forward
    std::cout << "Forward traversal: ";
    for (int val : LinkedList)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Traverse and print elements backward
    std::cout << "Backward traversal: ";
    for (auto it = LinkedList.rbegin(); it != LinkedList.rend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}