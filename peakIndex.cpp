#include <iostream>
using namespace std;

int main()
{
    int arr[8], len = 0, size = 8, check = 1, index;

    cout << "Enter 8 element" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        len += 1;
    }

    if (len <= 2)
    {
        cout << "This is not a mountain Array" << endl;
        return 0;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[0] > arr[1])
        {
            cout << "This is not a mountain Array" << endl;
            return 0;
        }
        
        if (arr[i] < arr[i + 1])
        {
            if (check == 0)
            {
                cout << "This is not a mountain Array" << endl;
                return 0;
            }
            check = 1;
        }
        else if (arr[i] > arr[i + 1])
        {
            if (check == 1)
                index = i;
            check = 0;
        }
    }

    if (check == 1)
    {
        cout << "This is not a mountain Array" << endl;
        return 0;
    }

    cout << "Index is " << index << endl;
    return 0;
}