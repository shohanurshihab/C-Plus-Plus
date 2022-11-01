#include <iostream>

using namespace std;

int main()
{
    int array1[]={2,1,1,2,3,3,5,6,6,7,8,8,10,10,10,10};
    int n=sizeof(array1)/sizeof(array1[0]);
  //  int array2[50];
    for(int i=0; i<n; i++)
    {

        for(int j=0;j<n;j++)
        {
            if(array1[i] == array1[j+1])
        {
            array1[i] = array1[j+1];n--;

        }

        /* \brief
         *
         * \param
         * \param
         * \return
         *

        else
        {
            array1[i]=array1[i];

        }*/

        }

        for(i=0; i<n; i++)
            {
                cout<<n<<" " ;
            }

    }

    return 0;
}
