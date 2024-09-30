#include <iostream>

int& ReturnByRef(int& Val) // Pass by reference
{
    std::cout<<" Function" << &ReturnByRef << "  " << &Val;
    return Val;  // Return the reference
}

int main()
{
    int val{ 0 };
    std::cin >> val;

    int& FunctionRef = ReturnByRef(val); // Bind to reference
    FunctionRef = 100; // Modify value through the reference

   std::cout << &ReturnByRef << "  "; // Will print 100
}