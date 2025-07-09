#include<iostream>
#include<vector>
#include<string>
using namespace std;

void merge(vector<string> &v, int si, int mid, int ei){
    vector<string> temp;
    int i = si;
    int j = mid+1;
    while(i <= mid && j <= ei){
        if(v[i] < v[j]){
            temp.push_back(v[i++]);
        } else {
            temp.push_back(v[j++]);
        }
    }
    while(i <= mid){
        temp.push_back(v[i++]);
    }
    while(j <= ei){
        temp.push_back(v[j++]);
    }
    for(int idx=si, x=0; idx<=ei; idx++){
        v[idx] = temp[x++];
    }
}

void mergeSort(vector<string> &v, int si, int ei){
    if(si >= ei){
        return;
    }
    int mid = si + (ei - si)/2;
    mergeSort(v, si, mid);
    mergeSort(v, mid+1, ei);
    merge(v, si, mid, ei);
}

void printArr(vector<string> v){
    for(int i=0; i<=(v.size()-1); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<string> v1 = {"sun","earth","mars","mercury"};
    cout << "Array before sorting:\n";
    printArr(v1);

    mergeSort(v1, 0, (v1.size()-1));
    cout << "\nArray after sorting:\n";
    printArr(v1);
    return 0;
}