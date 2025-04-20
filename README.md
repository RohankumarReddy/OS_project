# 🖥️ System Call Interface - OS Project

A basic terminal-based menu-driven C program that demonstrates the use of system calls to interact with the operating system.

## 📋 Features

- Get system info (`uname -a`)
- Check disk usage (`df -h`)
- Show running processes (`ps aux`)
- Create a file (`touch`)
- Delete a file (`rm -i`)
- Monitor CPU and Memory Usage (`top`)
- Check network status (`ip a`)
- Display credits

## ⚙️ Requirements

- GCC compiler
- Linux or WSL (for Linux commands)
- Terminal or command-line access

## 🧑‍💻 How to Compile and Run

```bash
gcc OS_project.c -o OS_project
./OS_project

If on WINDOWS:
gcc OS_project.c -o OS_project.exe
OS_project.exe
