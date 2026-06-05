#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class User {
public:
    string username;
    string password;

    User(string u, string p) {
        username = u;
        password = p;
    }
};

class Passenger {
public:
    int id;
    string name;
    string status;

    Passenger(int i, string n, string s) {
        id = i;
        name = n;
        status = s;
    }
};

vector<User> users;
vector<Passenger> confirmed;
queue<Passenger> rac;
queue<Passenger> waitingList;

int passengerId = 1;

// Register
void registerUser() {
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    users.push_back(User(username, password));

    cout << "Registration Successful!\n";
}

// Login
bool loginUser() {
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    for (auto user : users) {
        if (user.username == username &&
            user.password == password) {
            cout << "Login Successful!\n";
            return true;
        }
    }

    cout << "Invalid Username or Password!\n";
    return false;
}

// Book Ticket
void bookTicket() {
    string name;

    cout << "Enter Passenger Name: ";
    cin >> name;

    Passenger p(passengerId++, name, "");

    if (confirmed.size() < 2) {
        p.status = "Confirmed";
        confirmed.push_back(p);
        cout << "Ticket Confirmed\n";
    }
    else if (rac.size() < 1) {
        p.status = "RAC";
        rac.push(p);
        cout << "Added to RAC\n";
    }
    else if (waitingList.size() < 2) {
        p.status = "Waiting";
        waitingList.push(p);
        cout << "Added to Waiting List\n";
    }
    else {
        cout << "No Tickets Available\n";
    }
}

// Display Tickets
void displayTickets() {
    cout << "\n--- Confirmed Tickets ---\n";

    for (auto p : confirmed) {
        cout << "ID: " << p.id
             << " Name: " << p.name
             << " Status: " << p.status << endl;
    }

    cout << "\n--- RAC Tickets ---\n";
    queue<Passenger> tempRac = rac;

    while (!tempRac.empty()) {
        Passenger p = tempRac.front();
        cout << "ID: " << p.id
             << " Name: " << p.name
             << " Status: " << p.status << endl;
        tempRac.pop();
    }

    cout << "\n--- Waiting List ---\n";
    queue<Passenger> tempWait = waitingList;

    while (!tempWait.empty()) {
        Passenger p = tempWait.front();
        cout << "ID: " << p.id
             << " Name: " << p.name
             << " Status: " << p.status << endl;
        tempWait.pop();
    }
}

// Cancel Ticket
void cancelTicket() {
    int id;

    cout << "Enter Passenger ID to Cancel: ";
    cin >> id;
    //qtee
    bool found = false;

    for (int i = 0; i < confirmed.size(); i++) {
        if (confirmed[i].id == id) {
            confirmed.erase(confirmed.begin() + i);
            found = true;

            cout << "Ticket Cancelled Successfully\n";

            if (!rac.empty()) {
                Passenger p = rac.front();
                rac.pop();

                p.status = "Confirmed";
                confirmed.push_back(p);

                if (!waitingList.empty()) {
                    Passenger w = waitingList.front();
                    waitingList.pop();

                    w.status = "RAC";
                    rac.push(w);
                }
            }

            break;
        }
    }

    if (!found) {
        cout << "Passenger not found in Confirmed Tickets\n";
    }
}

int main() {

    int choice;

    while (true) {

        cout << "\n===== TRAIN RESERVATION SYSTEM =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            registerUser();
            break;

        case 2:
            if (loginUser()) {

                int option;

                do {
                    cout << "\n===== USER MENU =====\n";
                    cout << "1. Book Ticket\n";
                    cout << "2. Cancel Ticket\n";
                    cout << "3. Display Tickets\n";
                    cout << "4. Logout\n";
                    cout << "Enter Choice: ";
                    cin >> option;

                    switch (option) {
                    case 1:
                        bookTicket();
                        break;

                    case 2:
                        cancelTicket();
                        break;

                    case 3:
                        displayTickets();
                        break;

                    case 4:
                        cout << "Logged Out Successfully\n";
                        break;

                    default:
                        cout << "Invalid Choice\n";
                    }

                } while (option != 4);
            }
            break;

        case 3:
            cout << "Thank You!\n";
            return 0;

        default:
            cout << "Invalid Choice\n";
        }
    }
}