#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,num;
    cin>>n;
    vector<int> v;
    for (int i=0;i<n;i++)
    {
        cin>>num;
        v.push_back(num);//push new element into the vector from the back
    }
    int m,val;
    cin>>m;
    for (int i=0;i<m;i++)
    {
        cin>>val;
        //Iterators are used to point at the memory addresses
        //begin() used to return the beginning position of the container
        //end() used to return the after end position of the container
        vector<int>::iterator low = lower_bound(v.begin(),v.end(),val);
        if(v[low-v.begin()]==val){
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
        }
        else {
            cout<<"No "<<(low-v.begin()+1)<<endl;
        }
    }
    
    return 0;
}