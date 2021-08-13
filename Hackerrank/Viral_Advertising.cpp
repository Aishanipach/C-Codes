#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

//Function starts here

int viralAdvertising(int n) {
    
    int ans=0, receivers=5;
    
    while(n!=0)
    {
     receivers/=2;
     ans+=receivers;
     receivers*=3;
     
     n--;   
    }
return ans;
}

//Ends here


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
  
