#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to check if username already exists
bool usernameExists(const string& username) {
    ifstream file("users.txt");
    string u, p;
    while(file >> u >> p) {
        if(u == username) {
            return true;
        }
    }
    return false;
}

// Function to register a new user
void registerUser() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    if(username.empty()) {
        cout << "Username cannot be empty!\n";
        return;
    }

    if(usernameExists(username)) {
        cout << "Username already exists! Choose a different one.\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;
    if(password.empty()) {
        cout << "Password cannot be empty!\n";
        return;
    }

    // Append user to file
    ofstream file("users.txt", ios::app);
    file << username << " " << password << endl;
    file.close();

    cout << "Registration successful!\n";
}

// Function to login a user
void loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");
    string u, p;
    bool found = false;
    while(file >> u >> p) {
        if(u == username && p == password) {
            found = true;
            break;
        }
    }
    file.close();

    if(found)
        cout << "Login successful!\n";
    else
        cout << "Invalid username or password!\n";
}

int main() {
    int choice;
    cout << "1. Register\n2. Login\nChoose an option: ";
    cin >> choice;

    if(choice == 1)
        registerUser();
    else if(choice == 2)
        loginUser();
    else
        cout << "Invalid option selected!\n";

    return 0;
}