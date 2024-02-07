#include<iostream>
using namespace std;
int main()

    {
     double n,fact=1,i;
    cout<<"Enter The number=";
    cin>>n;
    
    for(i=1;i<=n;i=i+1)
    {
        fact=fact*i;
    }
    cout<<fact;
}



// // PRIME NUMBER

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter The number =";
    cin>>n;
     if (n<2)
    {
       
       cout<<"Not Prime ";
       return 0;
    }
    else 
    {
        for(i=2;i<n;i=i+1)
        {
            if(n%i==0)
            {
            cout<<"Not a prime ";
              return 0;
            }

          
        }
        }
}


    



