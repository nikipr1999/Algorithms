#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s1,t;
    int n;
    cout<<"Enter size of stack ";
    cin>>n;
    int num;
    while(n--)  // reading the array
    {
        cin>>num;
        s1.push(num);
    }


    int temp;
    stack <int> s2;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        while(!s1.empty())
        {
            temp=s1.top();
            s1.pop();
            if(s2.empty())
                s2.push(temp);
            else
            {
                if(s2.top()<temp)
                    s2.push(temp);
                else
                    {
                        s1.push(s2.top());
                        s2.pop();
                        s2.push(temp);
                    }
            }

        }

        //trick part - storing largest element in stack to the array
         arr[n-1-i]=s2.top();
         s2.pop();

         while(!s2.empty())   // placing all elements to stack s1
         {
             s1.push(s2.top());
             s2.pop();
         }
    }

    // Printing the result sorted array
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";

    return 0;
}
