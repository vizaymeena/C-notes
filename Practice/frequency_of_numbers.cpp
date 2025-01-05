// Prints the frequency of all numbers occuring the number of times in an array 
#include <iostream>
using namespace std;
int main() {
    int arr[]={2,7,2,6,8,3,9,8,3,3};
    for(int i=0;i<10;i++)
    {
        int count=1;
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1) 
        { 
            cout<<arr[i]<<"count is"<< count ;
            cout<<endl;
        }
    }
}

//output 
/*      arr[i]  and the     count++
            2   count is     2
            7   count is     1
            6   count is     1
            8   count is     2
            3   count is     3
            9   count is     1 
*/

//Note: 
/*    
      count++ only happens for the duplicates numbers and the value for duplicates updated with arr[j]=-1 ; 
      and also where arr[i]!=-1 ; means the number does not have its duplicate the number is unique among the     others in an array
*/
