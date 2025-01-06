#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of rows"<<endl;
    int n;
    cin>>n;
    char count = 64;
    for(int i = 0;i<n;i++)
    {
        for (int  j =0;j<=i;j++ )
        {
            count = count+1;
            cout<<count;
            
        }
        cout<<endl;
    }
    return 0 ;
    
}
