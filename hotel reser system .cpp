#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Hotel {
private:
    int roomNumber;
    bool isReserved;
    bool isCheckedIn;
    string guestName;
    int days;
    float roomPrice;

public:
    Hotel(int rNo = 0, float price = 0) {
        roomNumber = rNo;
        roomPrice = price;
        isReserved = false;
        isCheckedIn = false;
        days = 0;
    }

    void reserveRoom() {
        if (isReserved) {
            cout << "Room already reserved!\n";
            return;
        }

        cout << "Enter guest name: ";
        cin.ignore();
        getline(cin, guestName);

        cout << "Enter number of days: ";
        cin >> days;

        isReserved = true;
        cout << "Room reserved successfully.\n";
    }

    void checkIn() {
        if (!isReserved) {
            cout << "Room not reserved yet!\n";
            return;
        }
        if (isCheckedIn) {
            cout << "Guest already checked in.\n";
            return;
        }

        isCheckedIn = true;
        cout << "Check-in successful.\n";
    }

    void checkOut() {
        if (!isCheckedIn) {
            cout << "No active check-in found.\n";
            return;
        }

        float bill = days * roomPrice;
        float discount = 0;

        if (days >= 5) {
            discount = bill * 0.10; // 10% discount
        }

        float finalBill = bill - discount;

        cout << fixed << setprecision(2);
        cout << "\n--- BILL DETAILS ---\n";
        cout << "Guest Name : " << guestName << endl;
        cout << "Room No    : " << roomNumber << endl;
        cout << "Days Stay  : " << days << endl;
        cout << "Total Bill : $" << bill << endl;
        cout << "Discount   : $" << discount << endl;
        cout << "Final Bill : $" << finalBill << endl;

        // Reset room
        isReserved = false;
        isCheckedIn = false;
        guestName = "";
        days = 0;

        cout << "Check-out completed.\n";
    }

    void showStatus() {
        cout << "Room " << roomNumber << " | ";
        if (isCheckedIn)
            cout << "Checked In";
        else if (isReserved)
            cout << "Reserved";
        else
            cout << "Available";
        cout << endl;
    }
};

int main() {
    const int TOTAL_ROOMS = 5;
    Hotel rooms[TOTAL_ROOMS] = {
        Hotel(101, 100),
        Hotel(102, 120),
        Hotel(103, 150),
        Hotel(104, 180),
        Hotel(105, 200)
    };

    int choice, roomChoice;

    do {
        cout << "\n===== HOTEL MANAGEMENT SYSTEM =====\n";
        cout << "1. View Room Status\n";
        cout << "2. Reserve Room\n";
        cout << "3. Check In\n";
        cout << "4. Check Out\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (int i = 0; i < TOTAL_ROOMS; i++)
                rooms[i].showStatus();
            break;

        case 2:
            cout << "Enter room index (0-4): ";
            cin >> roomChoice;
            if (roomChoice >= 0 && roomChoice < TOTAL_ROOMS)
                rooms[roomChoice].reserveRoom();
            else
                cout << "Invalid room!\n";
            break;

        case 3:
            cout << "Enter room index (0-4): ";
            cin >> roomChoice;
            if (roomChoice >= 0 && roomChoice < TOTAL_ROOMS)
                rooms[roomChoice].checkIn();
            else
                cout << "Invalid room!\n";
            break;

        case 4:
            cout << "Enter room index (0-4): ";
            cin >> roomChoice;
            if (roomChoice >= 0 && roomChoice < TOTAL_ROOMS)
                rooms[roomChoice].checkOut();
            else
                cout << "Invalid room!\n";
            break;

        case 5:
            cout << "Exiting system...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}

