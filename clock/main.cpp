#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;

int main()
{   for(int x=1;x>0;x++)
    {
    int h,m,s;

        for(h=0;h<12;h++)
        {
            for(m=0;m<60;m++)
            {
                for(s=0;s<60;s++)
                {
                system("Color E4");
                     system("CLS");
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<"\n";
                        cout<<setw(300)<<h<<":"<<m<<":"<<s<<endl;
                        Sleep(1000);


                }
            }
        }
    }
}

