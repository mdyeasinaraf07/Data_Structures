#include <bits/stdc++.h>
using namespace std;

vector <int> merge_sort(vector <int> full_vector){
    if(full_vector.size() <= 1){
        return full_vector;
    }
    int mid = full_vector.size() / 2;
    vector <int> half_1st;
    for(int i = 0 ; i < mid; i++){
        half_1st.push_back(full_vector[i]);
    }
    vector <int> half_2nd;
    for(int i = mid; i < full_vector.size(); i++){
        half_2nd.push_back(full_vector[i]);
    }
    vector <int> sorted_half_1st = merge_sort(half_1st);
    vector <int> sorted_half_2nd = merge_sort(half_2nd);
    vector <int> sorted_done;
    int index1 = 0;
    int index2 = 0;
    for(int i = 0; i < full_vector.size(); i++){
        if(sorted_half_1st.size() == index1){
            sorted_done.push_back(sorted_half_2nd[index2]);
            index2++;
        }
        else if(sorted_half_2nd.size() == index2){
            sorted_done.push_back(sorted_half_1st[index1]);
            index1++;
        }
        else if(sorted_half_1st[index1] < sorted_half_2nd[index2]){
            sorted_done.push_back(sorted_half_1st[index1]);
            index1++;
        }
        else{
            sorted_done.push_back(sorted_half_2nd[index2]);
            index2++;
        }
    }
    return sorted_done;
}

int main(){
    int n;
    cin>> n;
    vector <int> vector_(n);
    for(int i = 0 ; i < n; i++){
        cin>> vector_[i];
    }
    int k;
    cin>> k;

    vector <int> sorted_vector = merge_sort(vector_);
    for(int i = 0; i < n; i++){
        cout<< sorted_vector[i]<< endl;
    }
    for(int i = 0, j = sorted_vector.size() - 1; j > 0 && i < sorted_vector.size() - 1; ){
        int sum = sorted_vector[i] + sorted_vector[j];
        cout<< "sum = " << sum<< "\n";
        if(sum == k){
            cout<< "YES"<< "\n";
            return 0;
        }
        else if(sum < k){
            i++;
        }
        else{
            j--;
        }
    }
    cout<< "NO"<< "\n";


    return 0;
}
