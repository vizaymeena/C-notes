
// 1-->> Leap Year 

/*
#include <iostream>
using namespace std;
int main(){
    int years = 0 ;
    for(;years<=99;++years){
        if(years%4==0){
            cout<<"Leap Year";
        }
        else{
            cout<<"ordinary Year";
        }
    }
}
*/

// 2--> nested loops [Need more understanding about it]
/*
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    for(int a=1;a<=2;a++){
        for(int b=1;b<=2;b++){
            for(int c=1;c<=2;c++){
                cout<<"a is"<<a <<"\n"
                <<"b is"<<b <<"\n"
                <<"c is"<<c <<"\n"
            }
        }
    }
}
*/

// 3-->> Check out the sum of user input number upto 10
/*
#include<iostream>
using namespace std;
int main(){
    int sum = 0 ;
    int num ;
    cout<<"Enter ";
    cin>>num;
    while(num<=10){
        cout<<num;
        sum=sum+num; // shows the sum of number after it upto 10(including number itself)
        num++; 
        cout<<"\n";
    }
    cout<<"Sum of individual number is "<<sum;
}
*/

//4-->> Check out the sum of user input number upto 0 [Opposite of above code]
/*
#include<iostream>
using namespace std;
int main(){
    int sum = 0 ;
    int num ;
    cout<<"Enter ";
    cin>>num;
    while(num>=0){
        cout<<num;
        sum=sum+num;
        num--; 
        cout<<"\n";
    }
    cout<<"Sum of individual number is "<<sum;
}
*/

// -->> Addation of individual number taken by user
/*
#include <iostream>
using namespace std;
int main(){
    int num; 
    cout<<"Enter number ";
    cin>>num;  // For an example user enter 153
    int sum=0;

    while(num%10!=0){ // setted the condition untill remainder not become zero while dividing the number by 10
        sum=sum+num%10;   // stores the last digit of number and add it with sum variable and stores it in within self(sum variable)
        num=num/10; // number will get updated and divide by 10 (153) new number will be 153 ---> 15 ---> 1 ---> 0; 
    }
    cout<<"Addition of Individual number " <<sum;
}

// -->>  Substraction of Individual number

#include <iostream>
using namespace std;
int main(){
    int num; 
    cout<<"Enter number ";
    cin>>num;  // For an example user enter 153
    int sum=0;

    while(num%10!=0){
        sum=num%10-sum;
        num=num/10;
    }
    cout<<"Substraction of Individual number " <<sum;
}

Note :- Just a minor change for indiviually [Add,substract,multiply and divide]
*/
