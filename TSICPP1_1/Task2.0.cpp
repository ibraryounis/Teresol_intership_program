#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n], evenNumbers[n], oddNumbers[n];
    int evenCount = 0, oddCount = 0;

    // Input the elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    // Separate even and odd numbers
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenNumbers[evenCount++] = numbers[i];
        }
        else
        {
            oddNumbers[oddCount++] = numbers[i];
        }
    }

    // Output the even numbers
    cout << "Even numbers: ";
    for (int i = 0; i < evenCount; i++)
    {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;

    // Output the odd numbers
    cout << "Odd numbers: ";
    for (int i = 0; i < oddCount; i++)
    {
        cout << oddNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}

