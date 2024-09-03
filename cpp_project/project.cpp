#include<bits/stdc++.h>
using namespace std;
 vector<pair<string,int>>v;
void add_record(){
    string user_name;
    int age;

cout<<"please enter username and age: \n";
cin>>user_name>>age;
v.push_back(make_pair(user_name,age));
cout<<"user record added successfully\n";
}

void fetch_record(){
    int id;
cout<<"please enter user_id: \n";
cin>>id;
cout<<"user id: "<< id;
cout<<"\nuser name: "<<v[id].first;
cout<<"\nage: "<<v[id].second;
}

int main(){
cout<<"---------------------------------------------------USER SIGN UP APPLICATION---------------------------------------------\n";

while(1){
cout<<"\nplease choose an option: \n 1-add_record \n 2-fetch_record \n 3-exit\n";
int n;
cin>>n;
switch(n){
case 1:
    add_record();
    break;
case 2:
    fetch_record();
    break;
case 3:
    return 0;
}

}
}
