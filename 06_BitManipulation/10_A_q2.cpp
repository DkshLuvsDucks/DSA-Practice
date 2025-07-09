#include<iostream>
#include<vector>
using namespace std;

void findSingleElement(vector<int>& arr){
    int answer = 0;
    for(int i = 0; i < arr.size(); i++){
        answer ^= arr[i];
    }
    cout << "Single = " << answer << endl;
}

int main(){
    vector<int> v = {2, 2, 3, 3, 4, 5, 5};
    findSingleElement(v);
    return 0;
}