#include<iostream>
#include<math.h>
// to find sum of prime numbers between 5 and 20
using namespace std;

//function to check if is prime or not
bool isPrime(int num)
{
    if(num%3==0) return false;

    else
    {
          int r=floor(sqrt(num));
        for(int i=3;i<=r;i++)   // check till sqrt(num) because its root exists till that
        {
            if(num%i==0)
                return false;
        }
    }
    return true;

}

int main()
{
int unsigned long long sum=5;
int num=5;
while(num<20)
{
    cout<<num<<endl;
    if(isPrime(num))
    {
        cout<<"\t\t"<<num<<"\t"<<sum;
        sum+=num;
    }
   num+=2;
}
cout<<"Answer : "<<sum;
    return 0;
}
