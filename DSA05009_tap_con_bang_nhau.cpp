//
//  DSA05009_tap_con_bang_nhau.cpp
//  CodePTIT_cau_truc_du_lieu_va_giai_thuat
//
//  Created by Chu Mai on 11/03/2023.
//

#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
map<int, bool> mark;

bool checkPartition(int i, int s, int target) {
    if (s == target) {
        return true;
    }

    if (i == arr.size() || s > target) {
        return false;
    }

    for (int j = i; j < arr.size(); j++) {
        if (mark[arr[j]] == false) {
            mark[arr[j]] = true;
            if (checkPartition(j + 1, s + arr[j], target)) {
                return true;
            }
            mark[arr[j]] = false;
        }
    }

    return false;
}

void oneTime() {
    arr.clear();
    mark.clear();

    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        sum += a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    if (sum % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    int target = sum / 2;
    bool check = checkPartition(0, 0, target);

    if (check) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        oneTime();
    }
}











