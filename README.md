# Shell Interface Project

## Overview

This project involves creating a simple shell interface in C that accepts user commands, spawns child processes, and executes those commands. It also supports background execution using the `&` symbol, similar to a standard shell.

The shell interface is designed to:
- Display a customizable prompt (`Sys2Sh:`).
- Parse user input and execute valid commands.
- Provide support for background and foreground process execution.
- Handle errors gracefully.

## Features

1. **Command Execution**: Executes standard Unix commands provided by the user.
2. **Background Execution**: Allows commands to run in the background using `&`.
3. **Error Handling**: Prints appropriate error messages for invalid commands.
4. **Dynamic Parsing**: Parses user input into arguments for execution using `execvp()`.
5. **Process Management**: Utilizes `fork()`, `execvp()`, and `waitpid()` for handling processes.
6. **Interactive Prompt**: Displays a prompt (`Sys2Sh:`) to interact with the user.

## How It Works

1. The program uses the `setup()` function to read and parse user commands.
2. The `main()` function forks a child process to execute the parsed command.
3. Commands ending with `&` are executed in the background.
4. The parent process waits for foreground processes to complete but continues execution for background processes.

## Example Usage

### Basic Commands
```bash
Sys2Sh: pwd
/home/user
