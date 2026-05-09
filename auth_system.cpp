#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser() {
    string user, pass;
    cout << "Enter username: "; cin >> user;
    cout << "Enter password: "; cin >> pass;

    ofstream file("users.txt", ios::app);
    file << user << " " << pass << endl;
    file.close();
    cout << "Registration successful!\n";
}

bool loginUser() {
    string user, pass, u, p;
    cout << "Username: "; cin >> user;
    cout << "Password: "; cin >> pass;

    ifstream file("users.txt");
    while (file >> u >> p) {
        if (u == user && p == pass) return true;
    }
    return false;
}

int main() {
    int choice;
    cout << "1. Register\n2. Login\nSelect: ";
    cin >> choice;

    if (choice == 1) registerUser();
    else if (choice == 2) {
        if (loginUser()) cout << "Login Success!\n";
        else cout << "Invalid credentials.\n";
    }
    return 0;
}