#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2)
            count++;
    }
    cout << count << endl;
}