#include<iostream>
using namespace std ;

int Sum(int m,int n)
{
    int ans =m+n;
    return ans; 
}
int mul (int m,int n)
{
    int ans = m*n;
}




int main()
{
    int a,b,c,d,e,f;
    cout<<"Enter The 1 Number:";
    cin>>a;
    cout<<"Enter The 2 number:";
    cin>>b;
    cout<< Sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
   

}



#include<iostream>
using namespace std;

bool prime(int n)
{
    if (n<2)
    return 0;
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        return 0;
    }
    return 1;
}

    int fact(int n )
    {
        int ans =1;
        for (int i=1;i<=n;i++)
        ans =ans*i;
        return ans ;

    }


int main(){
    int a,b;
    cout<<"Enter The Number a:";
    cin>>a>>b;
     
    // A is prime or Not 
        cout<<prime(a)<<endl;

    // A ka Factorial

    cout<<fact(a);
    // B is Prime or not 
     cout<<prime (b)<<endl;
    // B ka Factorial
    cout<<fact(b)<<endl;
    // B-A prime or not 
   cout<< prime (b-a)<<endl;
    // B-A ka Factorial 
    cout<<fact(b-a);

}