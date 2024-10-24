//WAP to check palindrome
#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> vec;
    int n,ele;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ele;
        vec.push_back(ele);
    }
    cout << "vector : " ;
    for(int i=0; i <n;i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    int check = 0;
    for(int i=0;i<n;i++){
        if(vec[i] == vec[n-1-i]){
            check++;
        }
    }
    cout << check << endl;
    if(check == n){
        cout << "Is palindrome" ;
    }else{
        cout << "not a Palindrome";
    }
    return 0;

}
