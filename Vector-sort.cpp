#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int size;
    int num;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>num;
        v.push_back(num);
    } 
    sort(v.begin(),v.end());
    for(int i=0;i<size;i++){
        cout<<v.at(i)<<" ";
    }
      
    return 0;
}
