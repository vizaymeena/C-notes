// What is Structor --:
// user defined data type that a coder makes.

#include <iostream>
using namespace std;

struct students{
    int roll=101;
    string name ="Vijay";

    void show()
    {
        cout<<roll <<"\n" <<name;
    }
}a;                            // a here is password



int main ()
{
    cout<<a.roll; // calling by password

    // updating the data values by class name in structure.
    students r;
    r.roll=102;
    cout<<r.roll  <<"\n";

    students d;
    d.name = 97;  // name is in string format so it will print ascai value
    cout<<d.name  <<"\n";  // will give ascai value of 97
    
    a.show();
}


// refrencing and derefrencing

//Date: 08/JAN/2025
#include <iostream>
using namespace std;

struct  employee{
    int salary;
    string name;

}; // terminator required
int main()
{
    employee p,c,b;
    p.name="vijay";
    p.salary=50000;

    employee *a;  // *a holding address of another variable (pointer)
    a=&p;         // a is holding address of p

    cin>>a->name;  
    cin>>a->salary;  
    

    cout<<a->name;   // calling a gives the value/address of p
    cout<<endl;
    cout<<a->salary;  // "->" is called "this" operator
}

