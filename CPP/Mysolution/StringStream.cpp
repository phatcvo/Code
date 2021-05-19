#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
   vector <int> input;
   stringstream ss(str);
   char ch;
   int i=0;
   while(ss!=NULL)
   {
       input.push_back(0);
       ss>>input[i++]>>ch;
   }
   return input;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

////////////////////////////////////////////////////

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector <int> out;  // Declares a vector to store the ints
    stringstream ss(str);   // Declares a stringstream object to de
    stringstream s(str); // Declares a stringstream object to deal with the modification of the string
    char ch;
    int tmp;
    while(s) // While the stringstream object does not hit a null byte
    {
        s>>tmp>>ch; // Extract the comma seperated ints with the extraction >> operator
        out.push_back(tmp); // Push the int onto the vector
    }
    return out; // Return the vector of ints
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}