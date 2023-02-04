#include <bits/stdc++.h>
using namespace std;

void print_arr(int step, vector<int> arr){
    printf("Buoc %d: ", step);
    for(int i=0; i<arr.size(); i++) printf("%d ", arr[i]);
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int len = arr.size();
    int step = 0;
    for(int i=0; i<len; i++){
        vector<int> old_arr = arr;
        for(int j=i+1; j<len; j++){
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);
        }
        if(old_arr != arr){
            step++;
            print_arr(step, arr);
        }
    }
}
