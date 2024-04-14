#include <bits/stdc++.h>

#include <iostream>
#include<cstdio>
using namespace std;

bool jaEhBinarioDecimal(int n);
bool ehProdutoDeBinarioDecimal(int n);

int main(){
    int t; cin >> t;
    
    while(t--){
        int n; cin >> n;
        if(jaEhBinarioDecimal(n)){
            cout << "YES" << endl;
        }else if(ehProdutoDeBinarioDecimal(n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;
}

bool jaEhBinarioDecimal(int n){
    string nS = to_string(n);
    int length = nS.length();
    for(int i = 0; i<length; i++){
        int digitoAtual = nS[i] - '0';
        if(digitoAtual!=1||digitoAtual!=0){
            return false;
        }
    }
    return true;
}
bool ehProdutoDeBinarioDecimal(int n){
    string nS = to_string(n);
    int length = nS.length();
    for(int i = 1; i<n; i++){
        for(int j = i; j<n; j++){
            int produto = j*i;
            if(produto<n){
                continue;
            }else if(produto>n){
                break;
            }else{
                if(jaEhBinarioDecimal(produto)){
                    
                }
            }
        }
    }
    return true;
}