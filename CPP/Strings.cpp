#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,a1,b1;
    
    cin>>a;
    cin>>b;
    a1 = b.front()+a.substr(1,a.size()-1);
    b1 = a.front()+b.substr(1,b.size()-1);
    cout<<a.size()<<" "<<b.size()<<'\n'<<a+b<<'\n'<<a1<<" "<<b1<<endl;
    return 0;
}
