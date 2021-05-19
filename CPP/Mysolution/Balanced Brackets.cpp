#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    std::stack<char> st;
    
    for(auto c : s) {
        switch (c) {
            case '{':
            case '[':
            case '(':
                st.push(c);
                break;
            case '}':
            case ']':
            // } 와 ] 일때 여는 괄호 { 와 [ 는 아스키코드값으로 2 차이가 난다.
                if ( st.empty() || st.top() != c-2 ) {
                    return "NO";
                }
                st.pop();
                break;
            case ')':
            // ) 일때 여는 괄호 ( 는 아스키코드값으로 1 차이가 난다.
                if ( st.empty() || st.top() != c-1 ) {
                    return "NO";
                }
                st.pop();
                break;
        }
    }
    
    return st.empty() ? "YES" : "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}