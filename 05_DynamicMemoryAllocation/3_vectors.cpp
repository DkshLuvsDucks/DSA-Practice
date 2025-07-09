#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1 ;
    cout << "size vec1 = " << vec1.size() << endl;
    vector<int> vec2 = {1,2,3,4} ;
    cout << "size vec2 = " << vec2.size() << endl;
    vector<int> vec3(5,-1) ; // size 5 array with initialized elements as -1
    cout << "size vec3 = " << vec3.size() << endl;
    cout << "vec3[0] = " << vec3.at(0) << endl;


    //increasing size of vec2
    cout << "\ncapacity of vec2 before expansion = " << vec2.capacity() << endl;
    vec2.push_back(5); 
    /*
    when more elements are added than the capacity, an array of double capacity is made and
    all elements are moved in and element is added as well. 
    */
    cout << "capacity of vec2 after expansion = " << vec2.capacity() << endl;
    vec2.pop_back();
    vec2.pop_back();
    vec2.pop_back();
    vec2.pop_back();
    vec2.pop_back();
    //removing the elements will not change the capacity.
    cout << "capacity of vec2 after element deletion = " << vec2.capacity() << endl;
    
    
    return 0;
}