# CodeAlpha_Login-and-Registration-System

This is a simple C++ console application that allows users to register and login using a username and password. User credentials are stored in a local file named users.txt.

Features
Register a new user with a unique username.
Prevent duplicate usernames.
Login with a valid username and password.
Simple validation for empty username or password.
Stores user credentials in a text file (users.txt).


How it Works
1. The program asks the user to choose between Register or Login.
2. For registration:
Enter a username and password.
The program checks if the username already exists in users.txt.
If not, the credentials are saved.


3. For login:
Enter your username and password.
The program verifies the credentials against the users.txt file.
Displays a success message if credentials match, otherwise an error.


Usage
1. Compile the program using a C++ compiler:
g++ main.cpp -o user_auth
2. Run the program:
./user_auth
3. Follow the on-screen instructions to register or login.


File Structure
main.cpp – Main source code containing registration and login logic.
users.txt – File to store registered usernames and passwords.

Notes
Make sure users.txt is in the same directory as the program.
Passwords are stored in plain text (not secure for real-world applications). This project is for learning purposes.

Future Improvements
Encrypt passwords for better security.
Implement a menu loop to allow multiple actions without restarting.

Add input masking for password entry.

Use a database instead of a text file for scalability.
