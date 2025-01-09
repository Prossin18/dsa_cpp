// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
cout<<"enter the number of rows"<<endl;
int n;
cin>>n;
for(int i = 0;i<n;i++)
{
    for(int j =0;j<n-1-i;j++)
    {
        cout<<' ';
        
    }
    for (int j = 0;j<=0;j++)
    {
        cout<<'*';
    }
    for (int j = n-i+1;j<n+i;j++)
    {
        cout<<' ';
        
    }
    for(int j = i;j<=i;j++)
    {
        if(i == 0)
        {
            continue;
        }
    cout<<'*';
    }
    cout<<endl;
 
    
}
//lower half

  for (int i = 0;i<n-1;i++)
    {
       for(int j =0;j<=i;j++)
       {
           cout<<" ";
           
       }
       for(int j =0;j<=0;j++)
       {
           cout<<'*';
       }
       for(int j = ;j>1+(i+i);j--)
       {
           
           cout<<' ';  
       }
       for(int j = i;j<=i;j++)
       {
           if(i==2)
           {
               continue;
           }
           cout<<"*";
       }
       cout<<endl;
    }


    return 0;
}
