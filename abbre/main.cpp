#include <iostream>

using namespace std;

int main()
{   string s;
    cin>>s;
    if(s[2]=='7')
    {
        cout << "gp"<< endl;
    }
    else if(s[2]=='9')
    {
        cout << "bnl"<< endl;
    }
    else if(s[2]=='6')
    {
        cout << "artl"<< endl;
    }
    else if(s[2]=='8')
    {
        cout << "rbi"<< endl;
    }
    else if(s[2]=='5')
    {
        cout << "tltk"<< endl;
    }
    else
    {
        cout<< "wrong"<<endl;
    }


    return 0;

}
