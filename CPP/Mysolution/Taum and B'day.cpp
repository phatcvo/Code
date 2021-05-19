#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

#define ULL unsigned long long

// Complete the taumBday function below.
ULL taumBday(ULL b, ULL w, ULL bc, ULL wc, ULL z) {
    ULL iMin = 0, iNotChg = w;
    if ( bc > wc ) {
        iMin = wc;
        iNotChg = b;
    }
    else {
        iMin = bc;
    }
    
    ULL iRes = b * bc + w * wc;
    ULL iChg = iMin * (b + w) + z * iNotChg;
    if ( iRes > iChg ) {
        iRes = iChg;
    }
    return iRes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string bw_temp;
        getline(cin, bw_temp);

        vector<string> bw = split_string(bw_temp);

        ULL b = stoi(bw[0]);

        ULL w = stoi(bw[1]);

        string bcWcz_temp;
        getline(cin, bcWcz_temp);

        vector<string> bcWcz = split_string(bcWcz_temp);

        ULL bc = stoi(bcWcz[0]);

        ULL wc = stoi(bcWcz[1]);

        ULL z = stoi(bcWcz[2]);

        ULL result = taumBday(b, w, bc, wc, z);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}