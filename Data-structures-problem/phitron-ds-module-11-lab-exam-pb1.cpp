#include <bits/stdc++.h>
using namespace std;

vector <int> quick_sort(vector <int> full_vector){
    if(full_vector.size() <= 1){
        return full_vector;
    }
    int pivot = full_vector.size() - 1;
    int pivot_count = 0;
    vector <int> small_half;
    vector <int> big_half;
    for(int i = 0; i < full_vector.size(); i++){
        if(full_vector[i] == full_vector[pivot]){
            pivot_count++;
            continue;
        }
        else if(full_vector[i] < full_vector[pivot]){
            small_half.push_back(full_vector[i]);
        }
        else{
            big_half.push_back(full_vector[i]);
        }
    }
    vector <int> sorted_small_half = quick_sort(small_half);
    vector <int> sorted_big_half = quick_sort(big_half);
    vector <int> sorted_done;
    for(int i = 0; i < sorted_big_half.size(); i++){
        sorted_done.push_back(sorted_big_half[i]);
    }

    for(int i = 0; i < pivot_count; i++){
        sorted_done.push_back(full_vector[pivot]);
    }
    for(int i = 0; i < sorted_small_half.size(); i++){
        sorted_done.push_back(sorted_small_half[i]);
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
    vector <int> sorted_vector = quick_sort(vector_);
    for(int i = 0; i < sorted_vector.size(); i++){
        cout<< sorted_vector[i]<< " ";
    }
    cout<< "\n";


    return 0;
}

