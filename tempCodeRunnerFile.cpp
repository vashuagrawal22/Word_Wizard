#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<string> scrambledletters(string[] a, string s){
    int n = s.size();
    bool flag= true;
    vector<string> v;
    int len = sizeof(a) / sizeof(a[0]);
    for(int i= 0; i< len; i++){
        if(a[i].size()==n)
        {
            for(int j=0;j<n;j++){
                if(s[j]=='*')
                continue;
                else if(s[j]==a[i][j])
                continue;
                else {
                flag= false;
                break;
                }
            }
            if(flag){
              v.push_back(a[i]);
            }
        }

    }
    return v.sort();
}

int main()
{
    string a[]={"reed", "rest", "rand","solve"};
    string s= "re**";
    scrambledletters(a,s);

    return 0;
}

