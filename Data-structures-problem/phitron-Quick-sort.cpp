#include <bits/stdc++.h>
using namespace std;

vector <int> quick_sort(vector <int> vectorr){
    if(vectorr.size() <= 1){
        return vectorr;
    }
    int pivot = rand() % vectorr.size() - 1;
    int pivot_count = 0;
    vector <int> small;
    vector <int> big;
    for(int i = 0; i < vectorr.size(); i++){
        if(vectorr[i] < vectorr[pivot]){
            small.push_back(vectorr[i]);
        }
        else if(vectorr[i] > vectorr[pivot]){
            big.push_back(vectorr[i]);
        }
        else{
            pivot_count++;
        }
    }
    vector <int> sorted_small = quick_sort(small);
    vector <int> sorted_big = quick_sort(big);
    vector <int> sorted_done;
    for(int i = 0; i < sorted_big.size(); i++){
        sorted_done.push_back(sorted_big[i]);
    }

    for(int i = 0; i < pivot_count; i++){
        sorted_done.push_back(vectorr[pivot]);
    }

    for(int i = 0; i < sorted_small.size(); i++){
        sorted_done.push_back(sorted_small[i]);
    }

    return sorted_done;

}

int main(){
    int n;
    cin>> n;
    vector <int> vectorr(n);
    for(int i = 0; i < n; i++){
        cin>> vectorr[i];
    }
    vector <int> sorted_vector = quick_sort(vectorr);
    for(int i = 0; i < sorted_vector.size(); i++){
        cout<< sorted_vector[i]<< " ";
    }
    cout<< "\n";

    return 0;
}
