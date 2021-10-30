#include <iostream>
#include "windows.h" // Library
using namespace std;

int main() {
    int start_sum, sum = 1000;
    cin.get();
    while (sum > 7)
{
        start_sum = sum;
        sum = sum - 7;
        cout << start_sum << " - 7" << " = " << sum << endl;

        Sleep(5);
}
    cout << "I`m a ghoul";
    cin.get();
    return 0;
}
 
