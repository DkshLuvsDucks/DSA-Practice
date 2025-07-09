#include<iostream>
using namespace std;

void removeDup(string str, string ans, int i, bool *map){
    if(i == str.length()){
        cout << "ans: " << ans << endl;
        return;
    }
    int mapIdx = str[i] - 'a'; // a -> 0
    if(map[mapIdx]){
        removeDup(str, ans, i+1, map);
    } else {
        map[mapIdx] = true;
        removeDup(str, ans+str[i], i+1, map);
    }
}

// other way (gives reverse output)
// void removeDup(string str, string ans, bool *map){
//     if(str.size() == 0){
//         cout << "ans: " << ans << endl;
//         return;
//     }
//     int n = str.size();
//     char ch = str[n-1];
//     int mapIdx = str[n-1] - 'a';
//     str = str.substr(0, n-1);
//     if(map[mapIdx]){
//         removeDup(str, ans, map);
//     } else {
//         map[mapIdx] = true;
//         removeDup(str, ans+ch, map);
//     }
// }

void removeDup(string str, string ans, bool *map){
    if(str.size() == 0){
        cout << "ans: " << ans << endl;
        return;
    }
    char ch = str[0];
    int mapIdx = str[0] - 'a';
    str = str.substr(1, str.size());
    if(map[mapIdx]){
        removeDup(str, ans, map);
    } else {
        map[mapIdx] = true;
        removeDup(str, ans+ch, map);
    }
}

int main(){
    string str = "aabbccddeeffgghhiijjkk";
    string ans = "";
    bool map[26] = {false};
    removeDup(str, ans, 0, map);
    return 0;
}