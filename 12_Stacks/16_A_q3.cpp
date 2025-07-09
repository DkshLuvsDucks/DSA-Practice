#include <iostream>
#include <vector>
using namespace std;

string simplifyPath(string path) {
    vector<string> store;
    string token;
    int i = 0, n = path.size();

    while (i < n) {
        while (i < n && path[i] == '/') i++;

        token = "";
        while (i < n && path[i] != '/') token += path[i++];

        if (token == "..") {
            if (!store.empty()) store.pop_back();
        } else if (!token.empty() && token != ".") {
            store.push_back(token);
        }
    }

    string result = "/";
    for (int j = 0; j < store.size(); ++j) {
        result += store[j];
        if (j != store.size() - 1) result += "/";
    }

    return result;
}

int main() {
    string path1 = "/home//foo/";
    string path2 = "/home/user/Documents/../Pictures";

    cout << simplifyPath(path1) << endl;
    cout << simplifyPath(path2) << endl;

    return 0;
}
