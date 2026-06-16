#include <iostream>
#include <string>
using namespace std;

class MySqlDatabase
{ // Low level module
public:
    void saveToSql(string data)
    {
        cout << "Executing SQl Query: INSERT INTO users VALUES('" << data << "');" << endl;
    }
};

class MongoDBDatabase
{ // Low level module
public:
    void saveToMongo(string data)
    {
        cout << "Executing MongoDB Function: db.users.insert({name: '" << data << "})" << endl;
    }
};


class UserService { // High-level module (Tightly coupled)
private:
    MySqlDatabase sqlDb;
    MongoDBDatabase mongoDb;

public:
    void storeUserToSQL(string user){
        sqlDb.saveToSql(user);
    }


    void storeUserToMongo(string user){
        mongoDb.saveToMongo(user);
    }
};



int main() {
    UserService service;
    service.storeUserToSQL("Rishu");
    service.storeUserToMongo("Raj");
    return 0;
}