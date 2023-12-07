#include <iostream>
#include <vector>

const int MAX_SIZE = 100;

void insertElement(std::vector<int>& arr, int& size, int element, int position) {
    if (position < 0 || position > size) {
        std::cout << "Invalid position for insertion." << std::endl;
        return;
    }

    if (size >= MAX_SIZE) {
        std::cout << "Array is full. Cannot insert more elements." << std::endl;
        return;
    }

    arr.insert(arr.begin() + position, element);
    size++;
}

void deleteElement(std::vector<int>& arr, int& size, int position) {
    if (position < 0 || position >= size) {
        std::cout << "Invalid position for deletion." << std::endl;
        return;
    }

    arr.erase(arr.begin() + position);
    size--;
}

void displayArray(const std::vector<int>& arr) {
    std::cout << "Array elements: ";
    for (int value : arr) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr;
    int size = 0;

    while (true) {
        std::cout << "1. Insert element\n2. Delete element\n3. Display array\n4. Exit\n";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int element, position;
                std::cout << "Enter the element to insert: ";
                std::cin >> element;
                std::cout << "Enter the position to insert (0-indexed): ";
                std::cin >> position;
                insertElement(arr, size, element, position);
                break;
            }
            case 2: {
                int position;
                std::cout << "Enter the position to delete (0-indexed): ";
                std::cin >> position;
                deleteElement(arr, size, position);
                break;
            }
            case 3:
                displayArray(arr);
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
