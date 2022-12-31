#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define times int t; cin >> t; while(t--)
#define ANS 1000000007
#define fr(na,ze,va) for (auto na = ze; na < va; na++)
#define F first
#define S second
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<string> mon = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12"};
    set<string> d28 = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"\
                        , "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24"\
                        , "25", "26", "27", "28"};
    set<string> d30 = d28;
    d30.insert("29");
    d30.insert("30");
    set<string> d31 = d30;
    d31.insert("31");

    map<string, int> mns = {{"01", 31}, {"02", 28}, {"03", 31}, {"04", 30},
                            {"05", 31}, {"06", 30}, {"07", 31}, {"08", 31},
                            {"09", 30}, {"10", 31}, {"11", 30}, {"12",31}};

    map<string, int> c;

    string s; cin >> s;
    vector<string> dates;
    for (int i = 0; i < s.size(); i++) {
        if (i+9 != s.size()) {
            if (s[i] != '-' && s[i+1] != '-' && s[i+2] == '-' &&\
                s[i+3] != '-' && s[i+4] != '-' && s[i+5] == '-' &&\
                s[i+6] != '-' && s[i+7] != '-' && s[i+8] != '-' && s[i+9] != '-') {
                    string tmp = s.substr(i,10);
                    string year = tmp.substr(6,4);
                    string day = tmp.substr(0,2);
                    string month = tmp.substr(3,2);
                    if (year != "2015" && year != "2014" && year != "2013")
                        continue;
                    if (!mon.count(month) || !d31.count(day))
                        continue;
                    if (mns[month] == 31 || (mns[month] == 28 && d28.count(day)) || (mns[month] == 30 && d30.count(day)))
                    {
                        if (!c.count(tmp)) c[tmp] = 1;
                        else c[tmp]++;
                    }
                }
        }
    }
    int m = 0;
    string pr;
    for (auto it = c.begin(); it != c.end(); it++) {
        if (it->second > m) {m = it->second; pr = it->first;}
    }
    cout << pr << endl;
    return 0;
} 
