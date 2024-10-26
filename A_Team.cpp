#include <iostream>
using namespace std;

int main()
{
    int n,i,petya,vasya,tonya,count = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2)
            count++;
    }
    cout << count << endl;
}