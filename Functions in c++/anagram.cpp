// Anagram
#include<iostream>
using namespace std;
int main()
{
   string str1 = "now";
   string str2 = "wow";
   bool found;
   
   if(str1.length()!=str2.length())
   {
       cout<<"Not an anagram";
       return 0;
   }
   for(int i=0;i<str1.length();i++)
   {
       found=false;
       for(int j=0;j<str2.length();j++)
       {
           if(str1==str2)
           { 
               str2="#"
               found=true;
               break;
           } // if block
       } // inner loop
        if(!found)
               {
                   cout<<"Anagram";
                   return 0;
               } // inner if state.
   }// outer loop
  
   
  
   
}

// Valid parenthesis --> using if and else if 