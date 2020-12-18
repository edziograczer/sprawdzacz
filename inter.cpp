#include <iostream>
using namespace std;

int main()
{   if(sizeof(intmax_t) == 8)
    {
        cout << "komp 64 bitowy" << endl;
    }
    else
    {
        cout << "komp 32 bitowy" << endl;
    }
}