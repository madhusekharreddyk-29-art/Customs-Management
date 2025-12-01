✅ Project Title

Custom Memory Management System Using Memory Pool in C


---

✅ Abstract

Efficient memory handling is crucial in embedded systems, real-time applications, and performance-critical software. Standard dynamic memory functions like malloc and free may introduce overhead, fragmentation, and unpredictable allocation times. This project implements a Custom Memory Management System using a Memory Pool Allocator in the C programming language.

The memory pool provides a fixed-size block of pre-allocated memory from which custom allocation requests are served. This approach ensures faster memory allocation, predictable performance, and reduced fragmentation. The project includes initialization, allocation, and reset mechanisms to simplify memory usage in controlled environments. It demonstrates the fundamental concepts of memory management, making it suitable for students, embedded developers, and system programmers.


<img width="445" height="501" alt="Screenshot 2025-11-27 115459" src="https://github.com/user-attachments/assets/513241e4-d4ab-4c42-9226-14499c3c877b" />




✅ Project Features

✔ 1. Fixed-Size Memory Pool

A static memory block is pre-allocated to manage all allocation requests, ensuring controlled usage of system memory.

✔ 2. Custom Allocation Function (poolAlloc)

Provides fast, linear-time allocation without the overhead of traditional dynamic allocation (malloc).

✔ 3. Efficient Memory Reset (resetPool)

Reclaims all allocated memory at once by resetting the pool offset — ideal for batch-processing scenarios.

✔ 4. Zero Fragmentation

Since memory is allocated sequentially from the pool, fragmentation is minimized or eliminated.

✔ 5. Safe and Predictable Behaviour

The allocator checks for overflow and ensures allocations do not exceed the pool’s pre-defined size.

✔ 6. Portable and Lightweight

The system uses only standard C libraries, making it suitable for embedded systems, microcontrollers, and low-memory devices.

✔ 7. Demonstration Driver Program

Includes a sample main() function showing allocation of integers and strings using the custom allocator.
🛠 Functional Requirements
These describe the features and behaviors the system provides to the end user:
- Add New Record
- User can input item details: ID, name, value, and duty percent.
- System calculates duty amount automatically using the formula:
\mathrm{Duty\  Amount}=\frac{\mathrm{Item\  Value}\times \mathrm{Duty\  Percent}}{100}.
- Record is stored persistently in a binary file (customs_records.dat).
- View All Records
- System retrieves all records from the file.
- Displays each record with item ID, name, value, duty percent, and duty amount.
- Search Record by Item ID
- User enters an item ID.
- System searches through stored records.
- If found, displays the full record details.
- If not found, informs the user.
- Exit
- User can terminate the program gracefully.
- Error Handling
- If the file cannot be opened, the system displays an error message.
- If no records exist, the system informs the user.
⚙️ Technical Requirements
These describe the implementation details, constraints, and design choices:
- Programming Language & Environment
- Written in C using standard libraries (stdio.h, stdlib.h, string.h).
- Console-based application.
- Data Storage
- Records are stored in a binary file (customs_records.dat).
- File operations use fopen, fwrite, fread, and fclose.
⚙️ Technical Requirements
These describe the implementation details, constraints, and design choices:
- Programming Language & Environment
- Written in C using standard libraries (stdio.h, stdlib.h, string.h).
- Console-based application.
- Data Storage
- Records are stored in a binary file (customs_records.dat).
- File operations use fopen, fwrite, fread, and fclose.
- Data Structure
- Custom struct CustomsRecord with fields:
- int itemID
- char itemName[50]
- float itemValue
- float dutyPercent
- float dutyAmount
- Persistence
- Records are appended ("ab") when added.
- Records are read ("rb") when viewing or searching.
- User Interface
- Menu-driven system with options displayed in a loop.
- Input handled via scanf.
- Computation
- Duty amount is calculated by a dedicated function calculateDuty() for modularity.
- Control Flow
- Infinite loop (while(1)) keeps the program running until user chooses Exit.
- switch statement handles menu choices.
- Constraints
- Item name input limited to 49 characters (due to char itemName[50]).
- No duplicate ID check (user must ensure uniqueness).
- Basic error handling (file open failures, invalid menu choice).
🖥️ Option 1: Run with GCC (MinGW) on Windows
- Install GCC (MinGW):
- Download MinGW or TDM-GCC.
- Install it and make sure the bin folder (e.g., C:\MinGW\bin) is added to your system PATH.
- Save your code:
- Copy your code into a file named customs.c.
- Open Command Prompt (CMD):
- Press Win + R, type cmd, and hit Enter.
- Navigate to your file location:
cd path\to\your\file
- Compile the code:
gcc customs.c -o customs.exe
- Run the program:
customs.exe

<img width="445" height="501" alt="Screenshot 2025-11-27 115459" src="https://github.com/user-attachments/assets/b07bdea7-2427-4eb7-93b3-d1f131bd54ee" />
<img width="469" height="346" alt="Screenshot 2025-11-27 115513" src="https://github.com/user-attachments/assets/35609982-5707-4d0e-ab4e-c27cc3078567" />
<img width="405" height="191" alt="Screenshot 2025-11-27 115524" src="https://github.com/user-attachments/assets/06400b0e-753a-43cf-8bd1-ef8774e20464" />
---

If you want, I can also provide:<img width="504" height="472" alt="Screenshot 2025-11-19 222328" src="https://github.com/user-attachments/assets/b239d10b-c9bc-4d64-85b5-93d9f963b4e3" />


