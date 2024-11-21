//WAP to search maximum element in a vector

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
    int maxEle = vec[0];
    for(int value : vec){
        cout << value << " " ;
    }
    cout << endl;
    for(int i=1;i<n;i++){
        if(vec[i] > maxEle){
            maxEle= vec[i];
        }
    }

    cout << "max element : " << maxEle << endl;
    return 0;
}