#include <bits/stdc++.h>
using namespace std;

void oneTime(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());

    int start = 0, end = arr.size()-1;
    while(end > start){
        printf("%d %d ", arr[end], arr[start]);
        end--;
        start++;
    }
    if(arr.size()%2 == 1) printf("%d", arr[start]);
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++) oneTime();
}



