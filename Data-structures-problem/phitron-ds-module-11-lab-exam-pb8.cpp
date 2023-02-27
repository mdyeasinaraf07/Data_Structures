#include <bits/stdc++.h>
using namespace std;

vector <int> even_generator(vector <int> vector_){
    vector <int> only_even;
    for(int i = 0; i < vector_.size(); i++){
        if(vector_[i] % 2 == 0){
            only_even.push_back(vector_[i]);
        }
    }
    return only_even;
}

int main(){
    vector <int> vector_ = {5, 8, 2, 7, 4};
    vector <int> even_vector = even_generator(vector_);
    for(int i = 0; i < even_vector.size(); i++){
        cout<< even_vector[i]<< " ";
    }
    cout<< "\n";

    return 0;
}
