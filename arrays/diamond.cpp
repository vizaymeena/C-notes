// Diamond Pattern

#include <iostream>
using namespace std;
int main()
{
    int a=0;
    
    for(int r=1; r<=9; r++)
    {
     (r<=5)? ++a : --a ;
     for( int c=1; c<=9; c++)
     {
         if(c>=6-a && c<=4+a)
         {
             cout<<"*";
         }
         else
         {
             cout<<" ";
         }
     }
     cout<<endl;
    }
}