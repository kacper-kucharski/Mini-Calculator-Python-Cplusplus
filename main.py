correctInputs = {"1", "2", "3", "4", "d", "c", "q"}
storedValue = 0
option = None
stop = False


def inputoperand():
    print("********************")
    print("Please input the operand")
    operand = int(input())
    return operand


def showstoredvalue():
    print("********************")
    print("Stored value = " + str(storedValue))

    if input("Press enter to continue...") == "\n":
        pass


def processoption(option):
    global storedValue, stop
    if option == "1":
        storedValue += inputoperand()
        showstoredvalue()
    if option == "2":
        storedValue -= inputoperand()
        showstoredvalue()
    if option == "3":
        storedValue *= inputoperand()
        showstoredvalue()
    if option == "4":
        storedValue /= inputoperand()
        showstoredvalue()
    if option == "d":
        showstoredvalue()
    if option == "c":
        storedValue = 0
        showstoredvalue()
    if option == "q":
        stop = True


while not stop:
    print("********************")
    print("CALCULATOR MENU\n")
    print("1-add")
    print("2-subtract")
    print("3-multiply")
    print("4-divide\n")
    print("d-display")
    print("c-clear")
    print("q-quit")
    print("********************\n")
    print("Choose an option:")

    correctInput = False
    while not correctInput:
        inp = input()
        for x in correctInputs:
            if inp == x:
                correctInput = True
                option = x
        if not correctInput:
            print("Invalid input. Please try again.")

    processoption(option)
exit()