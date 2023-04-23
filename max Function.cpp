#include <iostream>
#include <cstdio>
using namespace std;

void Big(int a, int b, int c, int d)
{
    cout<<max(max(max(a,b),c),d);
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    Big(a, b, c, d);
    return 0;
}
