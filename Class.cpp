#include <iostream>
using namespace std;
class Data{
  int age,std;
  string firstname, lastname;
    public:
    void getdata()
    {
        cin>>age>>firstname>>lastname>>std;
        cout<<age<<"\n"<<lastname<<", "<<firstname<<"\n"<<std<<endl<<"\n"<<age<<","<<firstname<<","<<lastname<<","<<std;
    }
};

int main() {
    Data ob;
    ob.getdata();
    return 0;
}
