#include<iostream>
#include<vector>
using namespace std;

vector<int> findMismatch(vector<int> &v){
    int n = v.size();
    vector<int> ans;
    vector<bool> isPresent(n+1,false);
    for(int i = 0; i < n; i++){
        if(isPresent[v[i]]){
            ans.push_back(v[i]); // found duplicate
        }
        isPresent[v[i]] = true;
    }
    for(int i = 1; i <= n; i++){
        if(!isPresent[i]){
            ans.push_back(i); // found missing number
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> arr;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }
    vector<int> ans = findMismatch(arr);
    cout << "duplicated element: " << ans.at(0) << endl;
    cout << "missing element: " << ans.at(1) << endl;
    return 0;
}