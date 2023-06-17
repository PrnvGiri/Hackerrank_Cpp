#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,f;
    cin>>s>>f;
    int len1 = s.size();
    int len2 = f.size();
    cout<<len1<<' '<<len2<<endl;
    cout<<s+f<<endl;
    char c0 = s[0];
    char c1 = f[0];
    s[0] = c1;
    f[0]=c0;
    cout<<s<<' '<<f;
    return 0;
}
