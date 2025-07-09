#include<iostream>
#include<vector>
using namespace std;

int findFirstOccurence(vector<int> &v1, int idx, int target ){
    if(idx == v1.size()){
        return -1;
    }
    if(v1[idx] == target){
        return idx;
    }
    findFirstOccurence(v1, idx + 1, target);
}

int findLastOccurence(vector<int> &v1, int idx, int target ){
    if(idx < 0){
        return -1;
    }
    if(v1[idx] == target){
        return idx;
    }
    findLastOccurence(v1, idx - 1, target);
}

//other approach
int lastOccur(vector<int> &v, int target, int idx){
    if(idx == v.size()){
        return -1;
    }
    int idxFound = lastOccur(v, target, idx+1);
    if(idxFound == -1 && v[idx] == target){
        return idx;
    }
    return idxFound;
}

int main(){
    vector<int> v1 = {1, 2, 3, 3, 4, 5};
    cout << "First occurence 3 at: " << findFirstOccurence(v1, 0, 3) << endl;
    cout << "First occurence 4 at: " << findFirstOccurence(v1, 0, 4) << endl;
    cout << "Last occurence 3 at: " << findLastOccurence(v1, (v1.size() - 1), 3) << endl;
    cout << "Last occurence 4 at: " << findLastOccurence(v1, (v1.size() - 1), 4) << endl;
    cout << "Last occurence 3 at: " << lastOccur(v1, 3, 0) << endl;
    cout << "Last occurence 4 at: " << lastOccur(v1, 4, 0) << endl;
    
    return 0;
}