# Mini-Calculator-Python-Cplusplus

I have created this small and simple calulator for a mini project for my analysis course.
Because it was so easy I challenged my self to write it in C++ (I've never wrote any code in C++) when I started recoding it in
C++ it wasn't even that hard. I will try to write my python project over to another languages more often from now on.

For the interested, this was the assignment:

    Analysis 2, 1920
    Mini-project Analysis 2, 2019/2020, Period 2

    Calculator
    mini-project

    Problem statement
    Implement a simple console-based calculator. The calculator stores only one value, and
    accepts four operations: add, subtract, multiply and divide. A user chooses an option
    (operator) and enters the value of the operand, and then the calculator adjusts the value
    using selected operator and given operand (example: add 5, subtract 1, multiply by 3, ...).
    The program should have a simple front end that will display the menu to the user. The menu
    should contain all basic operations, including:
    1) add
    2) subtract
    3) multiply
    4) divide
    Also, the menu should include options:
    c) clear
    d) display
    q) quit.
    The program should run in a loop until a user chooses to terminate it by inputting command:
    ‘q’. If user chooses ‘c’ clear, the calculator should be set to 0. For choosing ‘d’, the program
    should display the current value of the stored variable. Options 1-4 are used to call functions
    to add, subtract, multiply and divide. Each function should ask the user to input the operand
    and then process it.
    The main menu should be able to handle unrecognized input (e.g. user inputs ‘W’), inform
    the user and ask to enter a new (valid) command.
    Upon start, the stored value should be set to 0.
    Example input and output:
    Situation 1: main menu upon starting the program
    ********************
    CALCULATOR MENU
    1 - add
    2 - subtract
    3 - multiply
    4 - divide
    d - display
    c - clear
    q - quit
    ********************
    Choose an option:

    Situation 2: handling invalid input from a user ********************
    CALCULATOR MENU
    1 - add
    2 - subtract
    3 - multiply
    4 - divide
    d - display
    c - clear
    q - quit
    ********************
    Choose an option:
    W
    Invalid input. Please try again.
    Situation 3: user selects addition and enters a value ********************
    CALCULATOR MENU
    1 - add
    2 - subtract
    3 - multiply
    4 - divide
    d - display
    c - clear
    q - quit
    ********************
    Choose an option:
    1
    ********************
    Please input the operand
    10
    ********************
    Stored value = 10
    Press enter to continue
    Situation 4: user selects subtraction after situation 3
    ********************
    CALCULATOR MENU
    1 - add
    2 - subtract
    3 - multiply
    4 - divide
    d - display
    c - clear
    q - quit
    ********************
    Choose an option:
    2
    ********************
    Please input the operand
    3
    ********************
    Stored value = 7
    Press enter to continue
    Situation 5: user clears the stored variable
    ********************
    CALCULATOR MENU

    1 - add
    2 - subtract
    3 - multiply
    4 - divide
    d - display
    c - clear
    q - quit
    ********************
    Choose an option:
    x
    Invalid input. Please try again.
    c
    ********************
    Stored value = 0
    Press enter to continue

    Requirements (grading)
    Mini-projects are part of the homework and as such do not influence the final grade.
    However, they use a similar structure as the official grading assignment (summative) and as
    such are considered an essential practice (self-study) component of the course.
    To have this mini-project evaluated as passing it has to implement the following:
    1) display a menu in the required form;
    2) run until terminated by a user;
    3) able to handle invalid input (in the main menu only) without crashing;
    4) implement operations add, subtract, multiply and divide, and correctly adjust the
    stored global variable by it;
    5) implement options to display the current stored global value, reset the global value to
    0, and quit the program.
