//
//  DSA04018_dem_so_0.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 08/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

vector<bool> arr;
int n;

int binary_search(int fist, int last, vector<bool> arr, int need_find){
    if(fist==last) return fist;
    else{
        int mid = (fist + last)/2;
        if(mid == fist) return mid;
        if(arr[mid] == need_find){
            return binary_search(fist, mid, arr, need_find);
        }else{
            return binary_search(mid, last, arr, need_find);
        }
    }
}

void oneTime(){
    arr.clear();
    cin>>n;
    for(int i=0; i<n; i++){
        bool a;
        cin>>a;
        arr.push_back(a);
    }
    if(arr[0]==1) cout<<"0"<<endl;
    else if(arr[arr.size()-1]==0) cout<<n<<endl;
    else{
        cout<<binary_search(0, n-1, arr, 1)+1<<endl;
    }
}


int main(){
    int times;
    cin>>times;
    for(int i=0; i<times; i++) oneTime();
}




