# Assignment-2

A small C++ project demonstrating a simple `Employee` class (constructors, copy constructor, destructor, static members, and const/member functions).

## Files

- `Employee.h` - class declaration
- `Employee.cpp` - class implementation
- `main.cpp` - program demonstrating usage

## Build (Windows, PowerShell)

Make sure you have a C++ compiler (g++ / MinGW) in your PATH. Then from this folder run:

```powershell
g++ -std=c++11 main.cpp Employee.cpp -o Assignment2.exe
```

## Run

In PowerShell:

```powershell
.\Assignment2.exe
```

## Notes

- This project is intentionally small and educational. The `Employee` class tracks the number of live objects using a static member.
- If you see linker errors, try cleaning object files and rebuilding:

```powershell
Remove-Item .\*.o -Force -ErrorAction SilentlyContinue
Remove-Item .\Assignment2.exe -Force -ErrorAction SilentlyContinue
g++ -std=c++11 main.cpp Employee.cpp -o Assignment2.exe
```

If you want any additions (unit tests, CMake, or Visual Studio project), tell me and I can add them.