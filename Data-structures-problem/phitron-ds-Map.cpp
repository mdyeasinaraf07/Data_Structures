#include <bits/stdc++.h>
using namespace std;

int main(){
    map <string, int> mp;

    mp["Goru"] = 100;
    mp["Chagol"] = 80;
    mp["Vera"] = 50;
    mp["Mohis"] = 200;
    mp["Hati"] = 500;
    mp["Cat"] = 20;

    cout<<"Hati: "<< mp["Hati"]<< "\n";
    mp["Hati"] = 550;
    cout<< "Hati: "<< mp["Hati"]<< "\n";

    for(auto i: mp){
        cout<< "Key: "<< i.first<< " , "<< "Value: "<< " , "<< i.second<< "\n";
    }


    return 0;
}
