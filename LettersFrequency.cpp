#include <iostream>
#include <cctype>
#include <string>

#define LETTERCOUNT 26
#define CASEDIFF 32

using namespace std;

int main()
{
    string input;
    cout << "Enter the text: ";
    getline(cin, input);

    int frequency[26] = {0};

    for (int i = 0; i < input.length(); i++)
    {
        if (isalpha(input[i]))
        {
            input[i] = toupper(input[i]);
            frequency[input[i] - 65]++;
        }
        
    }

    char c[26];

    for (int i = 0; i < 26; i++)
    {
        c[i] = i + 65;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << c[i] << ": " << frequency[i] << endl;
    }
}