//
//  DSA05022_ky_tu_giong_nhau.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 12/05/2023.
//

//x: insert
//y: delete
//z: copy+paste

#include <bits/stdc++.h>
using namespace std;
int x, y, z;
int n;

void insert_and_copy(array<int, 115> &arr){
    for(int i=2; i<=n+10; i++){
        arr[i] = min(arr[i], arr[i-1]+x);
        if(i%2){
            arr[i] = min(arr[i], arr[i/2]+z+x);
        }else{
            arr[i] = min(arr[i], arr[i/2]+z);
        }
    }
}

void del(array<int, 115> &arr){
    for(int i=1; i<=n+9; i++){
        arr[i] = min(arr[i], arr[i+1]+y);
    }
}

void oneTime(){
    cin>>n;
    cin>>x>>y>>z;
    array<int, 115> arr;
    arr.fill(INT_MAX);
    arr[0]=0; arr[1]=x;
    bool loop = true;
    while (loop) {
        array<int, 115> old_arr = arr;
        insert_and_copy(arr);
        del(arr);
        if(old_arr == arr) loop = false;
    }
    cout<<arr[n]<<endl;
}

int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++) oneTime();
}
