# Student Management System (C)

A menu-driven **C command-line program** for maintaining a small collection of student records. It demonstrates structures, arrays, functions, and basic text-file storage.

## Features in the current source

- Add a student with an ID, name, and marks
- Display saved student records
- Search for a student by ID
- Delete a student by ID
- Load records from `students.txt` when the program starts
- Save records to `students.txt`

The program stores up to 100 records in its in-memory array.

## Requirements

- A C compiler such as GCC
- A terminal or command prompt

## Build and run

Clone the repository:

```bash
git clone https://github.com/eDDie-05/Student-Management-System-stms-.git
cd Student-Management-System-stms-
```

Compile the source:

```bash
gcc -std=c11 -Wall -Wextra -pedantic sms.c -o student-management
```

Run on macOS or Linux:

```bash
./student-management
```

Run on Windows:

```powershell
.\student-management.exe
```

## Data storage

The application reads and writes `students.txt` in its current working directory. The file is created when the program saves records. Keep a backup if the records matter.

## Current limitations

- This is a learning project, not a complete school administration system.
- Names are currently read as single words.
- Input validation and duplicate-ID checks can be improved.
- Records are stored in a plain text file; there are no user accounts or database.
- The repository also contains older or generated files; `sms.c` is the source used in the build command above.

## Ideas for future work

- Validate numeric input and handle invalid input safely.
- Support full names with spaces.
- Prevent duplicate student IDs.
- Add update/edit functionality.
- Add automated tests and clearer data-file handling.
- Separate the program into smaller source and header files.

## Contributing

Open an issue to discuss a change, then submit a focused pull request with a clear description and test steps.

## License

No open-source license is currently specified. All rights remain with the respective content owner unless a license is added.
