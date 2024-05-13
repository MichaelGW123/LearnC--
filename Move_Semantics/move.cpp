#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> ptr = std::make_unique<int>(42);
    std::unique_ptr<int> ptr2;
    if (ptr)
    {
        std::cout << "ptr owns memory " << *ptr << std::endl;
    }
    else
    {
        std::cout << "ptr does not own memory" << std::endl;
    }

    // ptr2 owns the memory, so it can be dereferenced safely
    if (ptr2)
    {
        std::cout << "ptr2 owns memory: " << *ptr2 << std::endl;
    }
    else
    {
        std::cout << "ptr2 does not own memory" << std::endl;
    }

    // Move the ownership of the dynamically allocated memory from ptr to ptr2
    ptr2 = std::move(ptr);
    std::cout << "ptr2 now owns the memory" << std::endl;

    // ptr no longer owns the memory, it's now nullptr
    // accessing *ptr will result in undefined behavior
    if (ptr)
    {
        std::cout << "ptr still owns memory" << std::endl;
    }
    else
    {
        std::cout << "ptr no longer owns memory" << std::endl;
    }

    // ptr2 owns the memory, so it can be dereferenced safely
    if (ptr2)
    {
        std::cout << "ptr2 owns memory: " << *ptr2 << std::endl;
    }
    else
    {
        std::cout << "ptr2 does not own memory" << std::endl;
    }

    return 0;
}
