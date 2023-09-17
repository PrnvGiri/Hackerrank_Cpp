#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int size;
    int pos;
    int a,b;
    int x;
    cin>>size;
    
    for(int i=0;i<size;i++){
        cin>>x;
        v.push_back(x);
    } 
    cin>>pos;
    cin>>a>>b;
    v.erase(v.begin() + pos - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout<<v.size()<<endl;
    for(int i = 0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
      
    return 0;
}
