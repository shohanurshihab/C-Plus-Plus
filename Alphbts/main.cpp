/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int i;
    char str ='A'; 
    cout << "\nEnglish Alphabets: " <<str ;
    for(i = 2; i <= 26; i++)
          {  
             
              str = str +1; 
        
              cout<<" " << str;
          }   

    return 0;
}
