void ?? 
constructor --> to initialize variable of a func.n   [ ref-objects ]
# Converts header file into code , then compailer executes (read) the code .
namespace :- is a space creates a differentiation b/w same name function   

Ref more on namespace 
:: Its name Function specifier in a more simplified way.

#include <iostream>
using namespace std;
namespace first
{
void sum()
 {
 int a = 10;
 int b =10;
 cout<<a+b;
 }
}

namespace second 
{

}

int main(){

first::sum()   // If not using the function specifier it would show error:- where sum is not defined in the scope shows

}



Return func.(int and all )  to display the result
& non-return (void)         to print the result 

Note: Void is a non return fucntion but if one still want to use return inside void function then give statement as ----> return 0; 

return 0 ? -- Func.n end line



for printing

int sum(){
int a =10;
int b =20;
cout<<a; 
cout<<a+b  // wrong statement co its making calculation and we use return func.n for calculation
}


// For calculation
int sum(){
int a =10;
int b=30;
return a+b;
}




 Date:30/12/24

 --> function overloading <--
   through ways of = 
   No. of parameter (1p) (1p,2p),
   order of parameter (ch,int) (int,ch), 
   parameter datatype , 
   ( int , char ) 

 


--> Recurssion <--  , function call itself inside same function
return type function
int sum(){
sum() // [Function Calling itself]
}

provide break condition through base condition[ if() ]




// fibonaccci through recurssion