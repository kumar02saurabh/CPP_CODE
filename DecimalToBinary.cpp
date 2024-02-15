            // Decimal To Binary
 #include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number:";
    cin>>num;
    int rem, ans=0, mul=1;
    while(num>0)
    {
        // Remainder Part
        rem=num%2;
        // Quetiont Part
        num=num/2;
        // Answer {art}
        ans=rem*mul+ans;
        // Multiply 
        mul=mul*10;

    }
    
    cout<<ans<<" ";

}
                             // OR 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number:";
    cin>>num;
    int rem,ans=0,mul=1;
    
    while(num>0)
    {
        rem=num%2;
        num/=2;
         ans+=rem*mul;
        mul*=10;
    }
    cout<<ans<<" ";
}

                // Binary To Decimal 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter The Number:";
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<ans<<" ";
}


