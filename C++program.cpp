#include <iostream>
using namespace std;

class UserAccount {
private:
    string username;
    string role; // "admin" or "user"
    static int adminCount; // Static variable to track admin accounts

public:
    // Constructor
    UserAccount(string uname, string urole) {
        username = uname;
        role = urole;
        if (role == "admin") {
            adminCount++; // Increase count if admin is created
        }
    }

    // Static method to return the count of admin accounts
    static int getAdminCount() {
        return adminCount;
    }

    // Display user info
    void display() {
        cout << "Username: " << username << ", Role: " << role << endl;
    }
};

// Initialize the static variable
int UserAccount::adminCount = 0;

int main() {
    // Creating user accounts
    UserAccount user1("Alice", "admin");
    UserAccount user2("Bob", "user");
    UserAccount user3("Charlie", "admin");

    // Displaying admin count
    cout << "Current Admin Count: " << UserAccount::getAdminCount() << endl;

    return 0;
}
