#include<iostream>
#include<vector>
using namespace std;

int main()
{   int target = 8;
    vector<int>vec = {10,2,4,4,5,9,7};
    int n = vec.size();
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            if(vec[i]+vec[j] == target)
            {
                cout<<vec[i] <<" and "<< vec[j]<<" are the two numbers whos addition is  8  in this array";
                return 0;
            }
           
        }
    }
    return 0;
}
