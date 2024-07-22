#include <iostream>
#include <vector>
using namespace std;


void display( vector<int> &v){
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
      cout << v.at(i) << " ";
}
}

int main(){
  int ele;
  vector<int> vec1;
  for(int i = 0; i < 4; i++){
    cout<<"enter value :- ";
   cin>>ele;

    vec1.push_back(ele);
  }
 /// vec1.pop_back();
 vector <int> :: iterator iter = vec1.begin();
 ////   insert -- vec1.insert(iter+1,30,77);
  display(vec1);
  return 0;
}
