#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "You have entered " << argc
         << " arguments:" << endl;

    int i = 0;
    while (i < argc)
    {
        cout << "Argument " << i + 1 << ": " << argv[i]
             << endl;
        i++;
    }

    return 0;
}