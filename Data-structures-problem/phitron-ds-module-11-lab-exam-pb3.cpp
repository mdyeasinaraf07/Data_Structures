#include <bits/stdc++.h>
using namespace std;

vector <int> merge_sort(vector <int> full_vector){
    if(full_vector.size() <= 1){
        return full_vector;
    }
    int mid = full_vector.size() / 2;
    vector <int> half1;
    vector <int> half2;
    for(int i = 0; i < mid; i++){
        half1.push_back(full_vector[i]);
    }
    for(int i = mid; i < full_vector.size(); i++){
        half2.push_back(full_vector[i]);
    }
    vector <int> sorted_half1 = merge_sort(half1);
    vector <int> sorted_half2 = merge_sort(half2);
    vector <int> sorted_done;
    int index1 = 0;
    int index2 = 0;
    for(int i = 0 ; i < full_vector.size(); i++){
        if(sorted_half1.size() == index1){
            sorted_done.push_back(sorted_half2[index2]);
            index2++;
        }
        else if(sorted_half2.size() == index2){
            sorted_done.push_back(sorted_half1[index1]);
            index1++;
        }
        else if(sorted_half1[index1] < sorted_half2[index2]){
            sorted_done.push_back(sorted_half1[index1]);
            index1++;
        }
        else{
            sorted_done.push_back(sorted_half2[index2]);
            index2++;
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
    int k;
    cin>> k;
    vector <int> sorted_vector = merge_sort(vector_);
    int pairs_count = 0;
    int high = n - 1;
    for(int i = 0, j = high; i < j;  ){
        int sum = sorted_vector[i] + sorted_vector[j];
        if(sum == k){
            pairs_count++;
            i++;
        }
        else if(sum < k){
            i++;
        }
        else{
            j--;
        }
    }
    cout<< pairs_count<< "\n";


    return 0;
}
