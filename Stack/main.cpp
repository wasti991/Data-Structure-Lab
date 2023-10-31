#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // Input and find the lowest element in the initial stack
    int n, lowest = INT_MAX;
    std::cout << "Enter the number of elements in the initial stack: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        myStack.push(element);
        if (element < lowest) {
            lowest = element;
        }
    }

    // Remove the lowest element from the initial stack
    std::stack<int> tempStack;
    while (!myStack.empty())   // !myStack.empty() returns true if the stack myStack is not empty and false otherwise
    {
        if (myStack.top() != lowest)    //myStack.top() is top element of the stack
        {
            tempStack.push(myStack.top());
        }
        myStack.pop();      //myStack.pop() is used to remove and return the object at the top of the Stack.
    }

    // Display the remaining elements in the initial stack
    std::cout << "Remaining elements in the initial stack: ";
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        myStack.push(tempStack.top());
        tempStack.pop();
    }
    std::cout << std::endl;

    // Add two more elements to the stack
    std::cout << "Enter two more elements to add to the stack:" << std::endl;
    for (int i = 0; i < 2; i++) {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        myStack.push(element);
    }

    // Find and remove the lowest element from the updated stack
    lowest = INT_MAX;
    while (!myStack.empty()) {
        if (myStack.top() < lowest) {
            lowest = myStack.top();
        }
        tempStack.push(myStack.top());
        myStack.pop();
    }

    // Display the remaining elements in the updated stack
    std::cout << "Remaining elements in the updated stack: ";
    while (!tempStack.empty()) {
        if (tempStack.top() != lowest) {
            std::cout << tempStack.top() << " ";
        }
        tempStack.pop();
    }
    std::cout << std::endl;

    return 0;
}
