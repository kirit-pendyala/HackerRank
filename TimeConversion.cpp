#include <bits/stdc++.h>
#include <string.h>
#include<iostream>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) 
{
    string res = "";
    int len = s.length();
    string time = s.substr(len - 2,2);
    string HH = s.substr(0,2);
    int hh = stoi(HH);
    string MMSS = s.substr(2,6);
    
    
    if (time == "AM")
    {
        int i = hh % 12;
        string s = to_string(i);
        s = "0" + s;
        res = s + MMSS;
    }
    else if (time == "PM")
    {
        int i = hh % 12;
        i+=12;
        string s = to_string(i);
        res = s + MMSS;
    }
    
    
    //cout << "Testing "<< len << time << HH << MMSS <<"int " << hh << endl;
    //cout << "Result : " << res;
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
