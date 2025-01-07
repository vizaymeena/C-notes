//programs reverse the numbers with numbers largest in order to smallest (and not reversing in the continous order)


#include <iostream>
using namespace std;
int main() {
    int arr[]={5,9,8,7,6};
    int k = 4;
    for(int i=0;i<k;i++)
    {
       for(int j=i+1;j<5;j++)
       {
          if(arr[i]<arr[j])
          {
              int temp; // reversing via swaping
              temp=arr[i]; 
              arr[i]=arr[j];
              arr[j]=temp;
          }
       }
      cout<<arr[i];  // all values of arr[j] into arr[i]
    }
}

//output
/*
      cout<< arr[i] = 9 8 7 6 5  

*/