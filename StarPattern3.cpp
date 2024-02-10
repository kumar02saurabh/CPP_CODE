// #include<iostream>
// using namespace std;
// int main(){
//     int row , col;
//     for (row =1;row<=5;row =row+1)
//     {
//         for (col=1;col<=5-row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     int n;
//     cout<<" Input The Number: ";
//     cin>>n;
//     for(row=1;row<=n;row =row+1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int  main(){
//     int row,col;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5-row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         {
//         cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int  main(){
//     int row,col;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5-row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         {
//         cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     int n;
//     cout<<"Input the Number";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int row,col;
    int n;
    
    cout<<"Enter The Number";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        cout<<"  ";
        
        for(col=1;col<=row;col=col+1)
        {
            char name='A'+col-1;
            cout<<name<<" ";
        }
        cout<<endl;

    }
}
