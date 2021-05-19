#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;
//n is array size
//k suvarray size <= n
void printKMax(int arr[], int n, int k){
	//Write your code here.
    std::deque<int> m;
    int iMax = 0;
    //find first max
    for (int i=0;i<k;++i)
    {
        m.push_back(arr[i]);
    }
    
    iMax = *std::max_element(m.cbegin(),m.cend());
    cout << iMax << " ";//print max
    
    for(int i=k;i<n;++i)
    {
        int iFront = m.front();
        m.pop_front();
        m.push_back(arr[i]);
        if(iFront==arr[i])
        {
            cout << iMax << " ";//no change => print max
        }
        else
        {
            if(iFront == iMax) // previous max value disappears 
            {
                iMax = *std::max_element(m.cbegin(),m.cend());
            }
            else // The maximum value is currently included & check again
            {
                if(iMax < arr[i])
                {
                    iMax=arr[i];
                }
            }
            cout << iMax << " ";//no change => print max
        }
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}