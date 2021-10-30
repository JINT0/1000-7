#include <iostream>
#include "windows.h" // Library
using namespace std;

int main() {
    int start_sum, i = 1000;

    while (i > 7)
{
        start_sum = i;
        i = i - 7;
        cout << start_sum << " - 7" << " = " << i << endl;

        Sleep(15);
}
    cout << "I`m a ghoul";
    cin.get();
    return 0;
}
 
