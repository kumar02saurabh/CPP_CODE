#include <iostream>
using namespace std;
int main(){
    int package = 15;
    if (package > 10)
    {
        cout <<"Accepted ";

    }
    else {
        cout<<"Rejected ";

    }
}


                // USER INPUT 
// #include <iostream>
// using namespace std;
// int main ()
// {
//     int package;
//     cin>>package;
//     if (package >20)
//     {
//         cout<<"Accepted";

//     }
//     else{
//         cout<<"Rejected";
//     }
    
// }


                    // MARKS 

// #include<iostream>
// using namespace std;
// int main(){
//     int Marks;
//     cout<< "Enter Your Marks";
//     cin>>Marks ;
// //  Agar if else ke baad single statement hoga too curly braces ka jarut nhi hai  
// if (Marks >33)   
// cout<<"Pass";
// else
//  cout<<"Fail";

// }


                    // a>b

// #include<iostream>
// using namespace std;
// int main (){
//     int a,b;
//     cout<<"Enter The value of a: ";
//     cin>>a;
//      cout <<"Enter the value of b: ";
//     cin>>b;

//     if(a>b)
//     {
//         cout<<"Yes";

//     }
//     else{
//         cout <<"No";
//     }}

                    // EVEN OR ODD

// #include <iostream>
// using namespace std;
// int main (){
//     int num;
//     cout<<"Enter the number:";
//     cin>>num;
//     if(num%2==0){
//         cout<<"Even";

//     }
//     else 
//     {
//         cout<<"Odd";
//     }
// }


// Alternate 
// #include <iostream>
// using namespace std;
// int main (){
//     int num;
//     cout<<"Enter the number:";
//     cin>>num;
//     if(num%2==1){
//         cout<<"Odd";

//     }
//     else 
//     {
//         cout<<"Even";
//     }
// }



                // Ages (Adult or Teenager)
// #include <iostream>
// using namespace std;
// int main(){
//     int ages;
//     cout<<"Enter the Person Age";
//     cin>>ages;
//     if(ages>18)
//     {
//         cout<<"Adult";
//         }
//     else {
//         cout<<"Teenager";
//     }


// }


                // +ve , -ve & 0

// #include <iostream>
// using namespace std;
// int main (){
//     int num;
//     cout<<"Enter the value ";
//     cin>>num;
//     if (num>0)
//     {
//         cout<<"Positive";
//     }
//     else if (num==0){
//         cout<<"zero";

//     }
//     else {
//         cout<<"Negative";
//     }
    
// }


                // VOWEL & CONSONANT

// #include <iostream>
// using namespace std;
// int main(){
//     char c= 'a';  or char c;cin>>c;
//     if (c=='a')
//     {
//         cout<<"Vowel";
//     }
//     else if (c=='e')
//     {
//         cout<<"Vowel";
//     }
//     else if (c=='i')
//     {
//         cout<<"Vowel";
//     }
//     else if (c=='o')
//     {
//         cout<<"Vowel";
//     }
//     else  if (
//         c=='u')
//     {
//         cout<<"Vowel";
//     }
//     else{
//         cout<<"Consonant";
//     }

// }



                    //WEEKS
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number:";
    cin>>num;
    if(num==1)
    {
        cout<<"Monday";
    }
    else if(num==2)
    {
        cout<<"Tuesday";
    }
    else if(num==3)
    {
        cout<<"Wednesday";
    }
    else if(num==4)
    {
        cout<<"Thrusday";
    }
    else if(num==5)
    {
        cout<<"Friday";
    }
     else if(num==6)
    {
        cout<<"Saturday";
    }
    else if(num==7)
    {
        cout<<"Sunday";

    }
    else {
        cout<<"Please Enter Valid Day";
    }
} 
