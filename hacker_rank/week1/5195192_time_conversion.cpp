#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hourstring = s.substr(0,2);
    
    int hourint = stoi(hourstring);
    
    size_t pos = s.find("PM");
    if(pos != string::npos)
    {
        if(hourint + 12 <24)
            hourstring = to_string(hourint+12);
    } else {
        if(hourint==12)
            hourstring="00";
    }
    s.replace(0,2,hourstring);
    s.erase(s.size()-2);
    return s;
        
    
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