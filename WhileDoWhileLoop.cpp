//  Counting Number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter The Number:";
//     cin>>n;
   
//     int i=1; 
//     while(i<=10)
//     {
//         cout<<n*i<<endl;
//         i++;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number:";
    cin>>n;
        int i=1;
    do{
        
        cout<<i<<endl;
        i++;

    }while(i<=10);

}


#include<iostream>
using namespace std;
int main(){
                    // Break  Continue 
    int i;
    for(i=0; i<=10;i++)
    {
        if (i==5)
        break;
        cout<<i<<" ";
    }


         continue;
             cout<<i<<" ";
}
   



                    //Switch Case 

       #include<iostream>
       using namespace std;
       int main(){
        int i;
        cout<<"Enter The Number:";
        cin>>i;

        switch(i)
        {
            case1:
            cout<<"MONDAY";
            break;
            case 2:
            cout<<"TUESDAY";
            break;
            case 3:
            cout<<"WEDNESDAY";
            break;
            case 4:
            cout<<"THRUSDAY";
            break;
            case 5:
            cout<<"FRIDAY";
            break;
            case 6:
            cout<<"SATURDAY";
            break;
            case 7:
            cout<<"SUNDAY";
            break;

            default:
            cout<<"Enter The Valid Date";
        

        }
       }                


