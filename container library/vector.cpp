/*
C++ containers data structures hote hain jo data elements 
ko store aur manage karne ke liye use hote hain. Yeh containers 
standard template library (STL) ke hisse hain aur bahut sare ready-made
 data structures provide karte hain. Har container 
 apne apne use cases ke liye optimize hota hai. Yahan kuch 
 pramukh containers hain:
 */

//Vector
 #include <iostream>
 #include <vector>
 #include <list>
 #include <map>
 using namespace std;


void dis( vector<int> &v){
    for(int i = 0; i<=v.size()-1;i++){
        cout<<v[i]<<endl;
    }
}
int main(){
    int ele;
 vector<int> vec ;
 for(int i = 1; i<=3 ;i++){
    cin>>ele;
    vec.push_back(ele);

 }
 dis(vec);

}
