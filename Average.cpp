#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a series of integers (Max:100, Enter a negative number to terminate): ";

    int array[101];
    int input;
    int n = 0;
    while(1)
    {
        cin >> input;
        if (input < 0)
        {
            break;
        }
        array[n] = input;
        n++;
    }

    if (n == 0)
    {
        cout << "No positive integer entered" << endl;
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum+= array[i];
    }

    float average = (float)sum / n;

    cout << "The average is: " << average << endl;

    cout << "The numbers greater than the average are: ";

    int greatercount = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > average)
        {
            cout << array[i] << " ";
            greatercount++;
        }
    }

    if (greatercount == 0)
    {
        cout << "none" << endl;
    }
}