// Can also be done via shifting , with the help of creating another array j=0;

int main()
{
    int arr[]={1,3,2,2}
    for(int i = 0; i<5;++i)
    {
        for( int j =i+1 ;j<5; ++j )
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
            }
        }
    }
    for( int i = 0; i<5;++i )
    {
        if( arr[i]!=-1 )
        {
            cout<<arr[i];
        }
    }
}


// Reversing  of Array 

int arr[]={1,2,1,3,2};
for(int i = 0; i<5/2;++i){ // runnning the loop for the 5/2th position of an array
    int temp;
    temp=arr[i];
    arr[i]=arr[5-i-1];
    arr[5-i-1]=temp;
}
for(int i =0;i<5;++i){
    cout<<arr[i];
}

// palindrome in an array


int arr[]={1,2,1,3,2};
for(int i = 0; i<5/2;++i){ 
    int temp;
    if(arr[i]!=arr[5-i-1]){  // Given Condition:- 'if arrayth 0th index is not equal to arrayth last index'.
     cout<<"Not palindrome";
     return 0;
    }
}
  cout<<"Palindrome";

  



