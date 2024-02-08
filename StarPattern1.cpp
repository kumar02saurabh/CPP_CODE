#include <iostream>
using namespace std;
int main()
{
    int row,col,n;
    for(row=1;row<=5;row=row+1)
    {
        for(col=1; col<=5;col=col+1)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }
  
}




 #include<iostream>
 using namespace std;
 int main(){
    int row, col;
    for(row=1;row<=5;row=row+1)
    {
        for (col=1;col<=5; col=col+1)
       { cout<<10<<" " ;
    }
      cout<<endl;
    }
          
 }



// #include <iostream>
// using namespace std ;
// int main(){
//     int row , col;
//     for (row= 1; row <=5; row =row+1)
//     {
//         for (col= 1; col<=5; col=col+1)
//        {cout <<row <<" ";
//        } 
//        cout<<endl;
//     }
    
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row , col ;
//     for (row=1 ;row<=5;row=row+1)
//     {
//         for (col=1 ; col<=5;col=col+1)
//         {
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }


// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int row, col;
// //     for(row =1;row<=5;row =row+1)
// //     {
// //         for (col=5;col>=1;col= col-1)
// //         {
// //                 cout<<col<<" ";
// //         }
// //         cout<<endl;
        
// //     }
// // }


// #include<iostream>
// using namespace std;
// int main(){
//     int row, col;
//     for (row=1; row<=5;row =row+1)
//     {
//         for (col=1;col<=5;col=col+1)
//         {
//           char name ='a'+row-1;
    
//         for(col=1;col<5;col=col+1)
//             {
//                 cout<<name <<" ";
//             }
        
//             cout<<endl;

//         }
//     }
    
// }


#include<iostream>
using namespace std;
int main()
{
    int row,col;
    int count=1;
    for(row=1;row<=5;row=row+1)
    {
        for (col=1;col<=5;col=col+1)
       { cout<<count<<" ";  

    //    cout<<(row-1)*5+col<<" "
        count= count+1;
       }
        cout<<endl;
    }
    

}

