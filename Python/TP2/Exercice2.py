def addition(a, b):
    return a + b

def soustraction(a, b):
    return a - b

def multiplication(a, b):
    return a * b

def division(a, b):
    try:
        return a / b
    except ZeroDivisionError:
        print("Impossible de diviser par un valeur null")
