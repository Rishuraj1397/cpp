#include<iostream>
using namespace std;


// Abstraction (Interface)
class Database {
public:
    virtual void save(string data) = 0; // Pure virtual function
};


// MySql implementation 9low lwvwl module
class MySqlDatabase : public Database{
public:
    void save(string data) override {
        cout << "Executing SQL Query: INSERT INTo VALUES(' " << data << "');" << endl;
    }
};


// MongoDb implementation (LOW-Level module)

class MongoDBDatabase : public Database {
public:
    void save(string data) override {
        cout << "Executing MongoDB Function: db.users.insert({name: '" << data << "'})" << endl;
    }
};


// High-level module (Now loosely coupled)
class UserService {
private:
    Database* db;  // Dependency Injection

public:
    UserService(Database* database) {  
        db = database;
    }
    
    void storeUser(string user) {
        db->save(user);
    }
};

int main() {
    MySqlDatabase mysql;
    MongoDBDatabase mongodb;

    UserService service1(&mysql);
    service1.storeUser("Aditya");

    UserService service2(&mongodb);
    service2.storeUser("Rohit");

    return 0;
}