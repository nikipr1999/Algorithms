#include<iostream>
using namespace std;
int top=-1;
void push(char a[],char data)
{
    a[++top]=data;
}
char pop(char a[])
{
    char s=a[top--];
   // cout<<top<<"   "<<s<<endl;
 return s;
}



int main()
 {
     int t;
     cin>>t;
     while(t--){
         top=-1;
         int flag=-1;
  char *arr = new char[100000];
  char *arr2=new char[100000];
  string s;
  cin>>s;
  char temp;
  int i=-1;
  do
  {i++;
      arr[i]=s[i];

  }while(arr[i]!='\0');

  for(int j=0;j<i;j++)
  {
      if(arr[j]=='{' || arr[j]=='['  || arr[j]=='(')
      {
          push(arr2,arr[j]);
           // cout<<top<<"  " <<arr2[top]<<endl;
      }
      else if (arr[j]=='}' || arr[j]==']'  || arr[j]==')')
      {
       temp=pop(arr2);
      // cout<<temp;
       if(arr[j]=='}' && temp=='{')
       continue;
       else if(arr[j]==']' && temp=='[')
       continue;
       else if(arr[j]==')' && temp=='(')
       continue;
       else
       {
          //cout<<"not balanced"<<endl;
           flag=1;
           break;
       }
      }
  }
  if(flag!=1&&top==-1)  cout<<"balanced"<<endl;

else
        cout<<"not balanced";
     }
	return 0;
}
