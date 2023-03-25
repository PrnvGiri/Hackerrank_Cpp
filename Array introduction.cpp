#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class solution
{
   public:
    int n,i,j=0;
    int arr[1000];
    int rev[1000];
    
    void getdata()
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void reverse()
    {
        for(i=n-1;i>=0;i--)
        {
            rev[j]=arr[i];
            j++;
        }
        
    }
    void display()
    {
        for(i=0;i<n;i++)
        {
            cout<<rev[i]<<" ";
        }
    }
    
    
    
    
};

int main() { 
    solution ob;
    ob.getdata();
    ob.reverse();
    ob.display();
    return 0;
}
