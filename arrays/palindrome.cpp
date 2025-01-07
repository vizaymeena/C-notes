//Whether an array is Palindrome or not
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1};
    for(int i=0; i<3; ++i)
    {
    if(arr[i]!=arr[3-i-1])
     {
        cout<<"Not palindrome";
        return 0;
     }
    }
    cout<<"palindrome";
}