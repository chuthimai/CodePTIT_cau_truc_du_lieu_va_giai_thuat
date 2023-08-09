//
//  tinh_tong_chi_phi.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 23/05/2023.
//

#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int n, k;
    cin>>n>>k;
    priority_queue<ll, vector<ll>, greater<ll>> q;
    for(int i=0; i<n; i++){
        ll a; cin>>a;
        q.push(a);
    }
    ll lost = 0;
    while (q.size()!=1) {
        ll sum = 0, max0 = INT_MIN, min0 = INT_MAX;
        int k0 = k;
        while (k0) {
            if(!q.empty()){
                sum += q.top();
                if(max0<q.top()) max0 = q.top();
                if(min0>q.top()) min0 = q.top();
                q.pop();
                k0--;
            }else break;
        }
        lost += max0 - min0;
        q.push(sum);
    }
    cout<<q.top()<<endl<<lost<<endl;
}






