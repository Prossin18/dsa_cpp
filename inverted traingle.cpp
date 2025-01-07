// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    cout<<"enter the number of rows"<<endl;
    int n;
    cin>>n;
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 2 ; j <= i ; j++)
        {
            cout <<" ";
        }
        
        for(int k = i ; k <= n ; k++)
        {
            cout << i;
        }
        cout << endl;
    }
    
    return 0;
}
