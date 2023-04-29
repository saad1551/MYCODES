#include <iostream>

using namespace std;

int integercheck(float x)
{
    int y = x;
    if (x == y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int primecheck(int x)
{
    int n = 2;
    while (1)
    {
        if (x % n == 0)
        {
            break;
        }
        n++;
    }
    if (x == n)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    int input;
    cout << "Enter a positive integer: ";
    cin >> input;

    float n = input;

    cout << "The prime factors of the entered integer are: ";

    int k = 2;

    while (1)
    {
        if (integercheck(n/k))
        {
            n /= k;
            cout << k;
            if (n <= 1)
            {
                break;
            }
            cout << " * ";
        }
        else
        {
            k++;
        }
        while (!primecheck(k))
        {
            k++;
        }
    }
}