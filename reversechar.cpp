#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of rows"<<endl;
    int n;
    cin>>n;
    for(int i = 65;i<n+65;i++)
    {
        for (char j =i ;j>=65;j-- )
        {
            cout<<j;
            
        }
        cout<<endl;
    }
    return 0 ;
    
}
