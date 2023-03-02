//
//  DSA01011_hoan_vi_tiep_theo_cua_chuoi_so.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 02/03/2023.
//

#include <bits/stdc++.h>
using namespace std;


void in(vector<int> arr){
    for(int i: arr) printf("%d", i);
    cout<<endl;
}

bool sinh(vector<int> &arr){
    vector<int> last_arr=arr;
    sort(last_arr.rbegin(), last_arr.rend());
    if(arr == last_arr) return false;
    else{
        int i=arr.size()-1, j=arr.size()-1;
        for(; i>0; i--){
            if(arr[i]>arr[i-1]){
                i = i - 1;
                break;
            }
        }
        int min = INT_MAX, index;
        for(; j>i; j--){
            if(min>arr[j] && arr[j]>arr[i]){
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
        sort(arr.begin()+i+1, arr.end());
        return true;
    }
}

void oneTime(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> arr;
    for(char i:str){
        arr.push_back(i-'0');
    }
    if(sinh(arr)) {
        cout<<n<<" ";
        in(arr);
    }else cout<<n<<" BIGGEST"<<endl;
    
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}


