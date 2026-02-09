Hotel Management System (C++)
A simple console-based Hotel Management System built in C++.
This project demonstrates Object-Oriented Programming (OOP) concepts such as classes, encapsulation, and methods, while simulating real-world hotel operations like room reservation, check-in, and check-out.

✨ Features
View room status (Available, Reserved, Checked-In)

Reserve a room with guest details

Check-in for reserved rooms

Check-out with automated bill calculation

Includes 10% discount for stays of 5 days or more

Reset room status after check-out

🛠️ Technologies Used
C++ (Standard Library)

Concepts: Classes, Objects, Encapsulation, Arrays, Input/Output, Conditionals

📂 Project Structure
Code
HotelManagementSystem/
│── main.cpp        # Entry point with menu-driven system
│── README.md       # Project documentation
🚀 How to Run
Clone the repository:

bash
git clone https://github.com/your-username/HotelManagementSystem.git
Navigate to the project folder:

bash
cd HotelManagementSystem
Compile the program:

bash
g++ main.cpp -o hotel
Run the executable:

bash
./hotel
📖 Usage Example
Code
===== HOTEL MANAGEMENT SYSTEM =====
1. View Room Status
2. Reserve Room
3. Check In
4. Check Out
5. Exit
Enter choice: 2
Enter room index (0-4): 1
Enter guest name: John Doe
Enter number of days: 6
Room reserved successfully.
🧾 Billing Example
Code
--- BILL DETAILS ---
Guest Name : John Doe
Room No    : 102
Days Stay  : 6
Total Bill : $720.00
Discount   : $72.00
Final Bill : $648.00
Check-out completed.
🎯 Learning Outcomes
Applying OOP principles in C++

Handling user input/output effectively

Implementing basic business logic (discounts, billing)

Designing a menu-driven console application

📌 Future Improvements
Add support for more rooms dynamically

Store guest records in files or databases

Implement room types (Single, Double, Suite)

Add admin authentication

👨‍💻 Author
Developed by Mesum Mukhtar   
Feel free to contribute, suggest improvements, or fork the project!
