#include <bits/stdc++.h>
using namespace std;

vector <int> count_sort(vector <int> full_vector){
    int length = full_vector.size();
    vector <int> count_vector(length);
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(i == full_vector[j]){
                count_vector[i]++;
            }
        }
    }
    vector <int> sorted_done;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < count_vector[i]; j++){
            sorted_done.push_back(i);
        }
    }
    return sorted_done;

}

int main(){
    int n;
    cin>> n;
    vector <int> vector_(n);
    for(int i = 0; i < n; i++){
        cin>> vector_[i];
    }
    vector <int> sorted_vector = count_sort(vector_);
    for(int i = 0; i < sorted_vector.size(); i++){
        cout<< sorted_vector[i]<< "\n";
    }

    return 0;
}
