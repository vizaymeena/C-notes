
// Right Angle triangle Pattern

#include <iostream>
using namespace std;
int main(){
    int i , j ; // defined variables for row and columns
    for ( i = 0 ; i <= 5 ; i++ ) // creating 5 rows            <<--- OUTER LOOP
    {
        for(j = 0 ; j <= i ; j++ ) // creating 5 columns       <<--- INNER LOOP 
        {
          if(j<=i){    // Condition ensure that stars printed upto the current rows number only : 
            cout<<"*"; // printing stars in columns through loop whenever 
          }
          else{
            cout<<"#";
          }
        }
        cout<<"\n"; // moves to the second row after and after of iteration of outer loop
    }
}
                        // #output
                        // *
                        // **
                        // ***
                        // ****
                        // *****
                        // // j<=i

                        
                        
                        


// Mirror Of Right angle triangle  

// wrong pattern
#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++)  // Rows starting from and increasing by +1 upto 5 in every iteration
    {
        for(j=5;j>=i-1;j--){ // we have columns totall number of 5 which are getting decreased upto 1 in every iteration 
            if(j<=i){        // whenever j <=5 it will print stars. 
                cout<<"*";
            }
            else{
                cout<<"-";
            }
        }
        cout<<"\n";
    }
}
                        //    #output
                        //    ----*
                        //    ---**
                        //    --***
                        //    -****
                        //    *****
                        //    // j<=i


// 
#include <iostream>
using namespace std;

int main() {
    int i,j;
    for (i=5;i>=1;i--)
    {
        for(j=5;j>=1;j--){
            if(j<=i){
                cout<<"*";
            }
            else{
                cout<<"-";
            }
        }
        cout<<"\n";
    }
}
            /*  Output of above code
                 *****
                 -****
                 --***
                 ---**
                 ----*
            */

#include <iostream>
using namespace std;

int main() {
    int i,j;
    for (i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++){
            if(j<=i){
                cout<<"*";
            }
            else{
                cout<<"-";
            }
        }
        cout<<"\n";
    }
}
 
                     /* Output of above

                      *****
                      ****-
                      ***--
                      **---
                      *----

                      */
