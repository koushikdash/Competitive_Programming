#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //char word[100];
    string word;
    while (n--)
    {
        cin >> word;
        int String_length = word.length();
        if(String_length>10){
            cout<<word[0]<<String_length-2<<word[String_length-1]<<endl;
        }
        else cout<<word<<endl;
    }

    return 0;
}