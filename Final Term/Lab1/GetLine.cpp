#include <bits/stdc++.h>
using namespace std;

int main()
{
    string myString, tempString;

    // Read some input from the keyboard
    getline(cin, myString);

    // This turns our string into a stream
    stringstream myStream(myString);

    // Using the newly created stream we read if up to the first space character
    // The next read starts at the character
    while (getline(myStream, tempString, ' '))
    {
        cout << tempString << ' ';
    }
    cout << endl;
    return 0;
}
