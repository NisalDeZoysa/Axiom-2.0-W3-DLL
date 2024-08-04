#include <iostream>
#include <list>

int main()
{
    std::list<int> doublyLinkedList;

    // Insert elements
    doublyLinkedList.push_back(1);
    doublyLinkedList.push_back(2);
    doublyLinkedList.push_back(3);

    // Traverse and print elements forward
    std::cout << "Forward traversal: ";
    for (int val : doublyLinkedList)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // Traverse and print elements backward
    std::cout << "Backward traversal: ";
    for (auto it = doublyLinkedList.rbegin(); it != doublyLinkedList.rend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}