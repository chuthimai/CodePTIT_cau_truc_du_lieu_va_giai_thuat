////
////  loai_bo_dau_ngoac.cpp
////  CodePTIT_cau_truc_du_lieu_va_giai_thuat
////
////  Created by Chu Mai on 09/04/2023.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//
//
//void oneTime(){
//    string str;
//
//    getline(cin, str);
//    stack<int> s;
//    int i=0;
//    while (i<str.size()) {
//        if(str[i]==' ') str.erase(i, 1);
//        else i++;
//    }
//    for(int i=0; i<str.size(); i++){
//        if(i==0 && str[i]=='(') str[i]=' ';
//        if(str[i]=='(') s.push(i);
//        else if (str[i]==')' && !s.empty()){
//            if(str[s.top()-1]=='-') s.pop();
//            else if(str[s.top()-1]=='+' ){
//                str[s.top()]=' ';
//                str[i]=' ';
//                s.pop();
//            }else if(i-s.top()==2){
//                str[s.top()]=' ';
//                str[i]=' ';
//                s.pop();
//            }
//
//        }else if(str[i]==')' && s.empty()){
//            str[i]=' ';
//        }
//    }
//    while(!s.empty()){
//        str[s.top()]=' ';
//        s.pop();
//    }
//    for(int i=0; i<str.size(); i++){
//        if(str[i]==' ');
//        else cout<<str[i];
//    }
//    cout<<endl;
//}
//
//int main(){
//    int n; cin>>n;
//    cin.ignore();
//    for(int i=0; i<n; i++) oneTime();
//}
//
//
