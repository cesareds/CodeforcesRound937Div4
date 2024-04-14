#include <bits/stdc++.h>

#include <iostream>
#include<cstdio>
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >>n;
        char direto[2*n][2*n];
        int linha = 0;
        bool cU = true;
        if(n%2==0){
            for(int i = 0; i<n*2; i = i + 2){
                if (cU) {
                    for(int j=0; j<n*2; j = j + 4){
                        direto[i][j] = '#';
                        direto[i][j+1] = '#';
                        direto[i+1][j] = '#';
                        direto[i+1][j+1] = '#';
                        direto [i][j + 2] = '.';
                        direto [i][j + 3] = '.';
                        direto [i+1][j + 2] = '.';
                        direto [i+1][j + 3] = '.';
                    }
                    cU = false;
                }else{
                    for(int j=0; j<n*2; j = j + 4){
                        direto [i][j] = '.';
                        direto [i][j+1] = '.';
                        direto [i+1][j] = '.';
                        direto [i+1][j+1] = '.';
                        direto[i][j + 2] = '#';
                        direto[i][j + 3] = '#';
                        direto[i+1][j + 2] = '#';
                        direto[i+1][j + 3] = '#';
                    }
                    cU = true;
                }
            }
        }else{
            for(int i = 0; i<n*2; i = i + 2){
                for(int j=0; j<n*2; j = j + 2){
                    if(cU){
                        direto[i][j] = '#';
                        direto[i][j+1] = '#';
                        direto[i+1][j] = '#';
                        direto[i+1][j+1] = '#';
                        cU = false;
                    }else{
                        direto [i][j] = '.';
                        direto [i][j+1] = '.';
                        direto [i+1][j] = '.';
                        direto [i+1][j+1] = '.';
                        cU = true;
                    }   
                }
            }
        }
        for (int i = 0; i < n*2; i++){
            for (int j = 0; j < n*2; j++){
                cout << direto[i][j];

            }
            cout << endl;   
        }
        for (int i = 0; i < n*2; i++){
            for (int j = 0; j < n*2; j++){
                direto[i][j] = 0;

            } 
        }
        
    }
    return 0;
}