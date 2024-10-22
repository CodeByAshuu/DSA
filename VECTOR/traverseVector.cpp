#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> vec(5,0);
    vector<char> vecChar = {'a', 'b', 'c', 'd', 'e'};
    // vector<string> vecstr = {'apple', 'banana', 'custard', 'dragonfruit'};

    //for loop
    cout << "for loop : ";
    for(int i=0;i < vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    //for each loop
    cout << "for each loop : ";
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "char : ";
    for(char val : vecChar){
        cout << val << " ";
    }


    return 0;

}