#include<iostream>
using namespace std;

class User{
private:
    int id;
    string pass;

public:
    string username;
    // Constructor
    User(int id){
        this->id = id;
    }
    
    // Getter
    int getId(){
        return id;
    }

    string getPassword(){
        return pass;
    }

    string getUsername(){
        return username;
    }
    
    //Setter
    void setId(int id){
        this->id = id;
    }

    void setUsername(string username){
        this->username = username;
    }

    void setPassword(string pass){
        this->pass = pass;
    }

};

int main(){
    User u1(101);
    u1.setUsername("dksh.amv");
    u1.setPassword("Daksh@2004");
    cout << "Username: " << u1.getUsername() << endl;
    cout << "Password: " << u1.getPassword() << endl;
    return 0;
}