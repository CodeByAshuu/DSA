//WAP to print second largest element
//only works for sorted array
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int n,val;
    cout << "enter number of values to insert: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> val;
        vec.push_back(val);
    }
    int max = vec[0];
    int secMax = vec[0];
    for(int value : vec){
        cout << value << " " ;
    }
    cout << endl;
    for(int i=0;i<n;i++){
        if(vec[i] > max){
            max= vec[i];
        }
    }
    cout<< "max: " << max << endl;
    for(int i=0;i<n;i++){
        if(vec[i] < max && vec[i]!=secMax){
            secMax = vec[i];
        }
    }
    cout << "second max element : " << secMax << endl;
    return 0;
}