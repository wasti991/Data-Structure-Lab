#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    int arr[10];
    int n = 10;

    // Input
    std::cout << "Enter 10 elements:" << std::endl;
    for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }

    // Initialize variables to store the pair with the sum nearest to zero
    int closest_sum = INT_MAX; //INT-MAX is a macro that defines the maximum value of the int data type

    int num1, num2;     // Iterate through the array and compare all pairs

    for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
                {
                    int current_sum = arr[i] + arr[j];
                    int abs_sum = std::abs(current_sum); //function abs() is used to calculate the absolute value of a number in C++.

                    if (abs_sum < std::abs(closest_sum))
                        {
                            closest_sum = current_sum;
                            num1 = arr[i];
                            num2 = arr[j];
                        }
                }
        }

    // Output the pair with the sum nearest to zero
    std::cout << "The two elements with the sum nearest to zero are: " << num1 << " and " << num2 << std::endl;

    return 0;
}
