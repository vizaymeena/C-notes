// RAT Pattern
int main() {
    for(int row=1;row<=5;row++)
    {
        cout<<row<<" "; // Printing rows in numbers
        
        
        for(int col=1;col<=row;col++)
        {
            //Run inner loop for outer loop iteration untill meeting the condition col<=row 
            cout<<col<<" " ; // printing columns in numbers
        }
        cout<<"\n";
    }
}

// Inverted RAT PAttern

int main() {
    for(int row=1;row<=5;row++)
    {
        for(int col=5;col>=row;col)// *****col>=row , Makes columns untill it col value becomes equal to row
        {
            cout<<col<<" " ; // printing columns in numbers
        }
        cout<<"\n"; // printing lines after completation of iteration one in inner loop;
    }
}