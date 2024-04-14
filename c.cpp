#include <bits/stdc++.h>

#include <iostream>
#include<cstdio>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int hor1 = 10* (s[0] - 48);
        int hor2 = s[1] - 48;
        int hor = hor1 + hor2;
        int min1 = 10*(s[3] - 48);
        int min2 = s[4]-48;
        int min = min1+min2;
        string ans;
        string smin;
        if(min < 10) {
            smin += "0" + to_string(min);
        } else{
            smin += to_string(min);
        }
        if(hor == 0){
            ans +=  "12:" + smin + " AM";
        }
        else if(hor >= 12 && hor < 13){
            ans +=  "12:" + smin + " PM";
        }
        else if(hor>=13){
            //tratar:
            hor = hor - 12;
            if(hor >= 10){
                ans += to_string(hor);
                ans += ":" + smin + " PM";
            }else{
                ans += "0" + to_string(hor);
                ans += ":" + smin + " PM";
            }
             
        }else{
            if(hor >= 10){
                ans += to_string(hor);
                ans += ":" + smin + " AM";
            }else{
                ans += "0" + to_string(hor);
                ans += ":" + smin + " AM";
            }
        }

        cout << ans << endl;
    }
 
    return 0;
}