// Reverse String

#include <iostream>
using namespace std;

void sum(){
    string str = "welcome";
    char temp;
    // 7/2 runs the loop to the half of the string other wise it will print the welcome as it is rather than reverse
    for(int i=0; i<7/2; i ++){
        temp = str[i];
        str[i]=str[7-i-1];
        str[7-i-1]=temp;
    }
    for(int i=0; i<7 ; ++i){
        cout<<str[i];
    }
    
}
int main() {
   sum();
}

// Palindrome of String
/* NOTE: Put this into function */

#include <iostream>
using namespace std;

int main()
{
    string str = "naman"; // welcome not pallindrome
    int start = 0;
     // -1 (space of null at the end of string)
    int end = str.length()-1; 
   
    while(start<end)
    {
        // When first is not equal to last loop breaks or else continue.
        if(str[start]!=str[end])
        {
         cout<<"not";
         return 0 ;
        }
        // If loops not breaks this would happen
        start++;
        end--;
    }
    cout<<"Pallindrome";
}

