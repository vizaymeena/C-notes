// Reversing Array and Finding out the nth largest number through user input
// Date:23/12/24 Day: Monday

#include <iostream>
using namespace std;
int main()
{
    int k;
    cout<<"Enter";
    cin>>k;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<k;++i)
    {
        for(int j=i+1;j<5;++j)
        {
            if(arr[i]<arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
        cout<<arr[k-1];
}