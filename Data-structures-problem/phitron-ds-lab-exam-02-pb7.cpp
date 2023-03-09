#include <bits/stdc++.h>
using namespace std;

void printList(list <int> l){
    auto a = l.begin();
    while (a != l.end()){
        cout<< *a<< " ";
        a++;
    }
    cout<< "\n";
}
void deleteValue(list <int> & l , int value){
    auto it = find(l.begin(), l.end(), value);
    l.erase(it);
}
int main(){

   list <int> l;
   l.push_back(10);
   l.push_back(20);
   l.push_back(30);
   l.push_back(40);
   l.push_back(50);
   l.push_back(60);
   printList(l);
   int k;
   cout<< "Enter a value of k: \n";
   cin>> k;
   deleteValue(l, k);
   printList(l);

    return 0;
}


