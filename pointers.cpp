#include <iostream>
#include<cstdio>
using namespace std;

void update(int *a,int *b) {
    int sum = *a + *b;
    int sub = *a - *b;
    
    cout<<sum<<"\n"<<abs(sub); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);

    return 0;
}
