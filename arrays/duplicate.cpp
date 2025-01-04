// Duplicate in an array
#include <iostream>
using namespace std;
int main() {
  int arr[]={4,2,2,4,5,5};
  for(int i =0;i<6;i++)
  {
      bool dup=false;
      
      for(int j=i+1;j<6;j++)
      {
          if(arr[i]==arr[j] && arr[i]!=-1)
          {
              arr[j]=-1;
              dup = true;
          } // if state.
      }//Inner loop
      if(dup)
      {
          cout<<arr[i];
      }
  }//outer loop
}