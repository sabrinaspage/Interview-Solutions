# functions are first class objects
# functions are objects
    # can be referenced to
    # passed to a variable
    # return functions and variables
# functions can be defined insie other functions
# functions can be passed as arguments to other functions
# modified behavior of function or class
# allows us to wrap another function in order to
# extend the behavior of wrapped function

# @gfg_decorator
# def hello_decorator():
#    print("Gfg")

# so we end up creating an object called
# hello_decorator
# using the decorator
# gfg_decorator
# where hello_decorator is a wrapper function
# and gfg_decorator is a callable function

def hello_decorator(func):
    def inner1():
        print("Hello, this is before function executes")
        func()
        print("this is after function executes")
    return inner1

def function_to_be_used():
    print("This is inside the function")

function_to_be_used() # optional to use decorator

function_to_be_used = hello_decorator(function_to_be_used)
# hello_decorator surrounds the function, controlling its behavior

function_to_be_used() # now when the function is called, hello_decorator is in control of it

# let's try to execute time of a function ----#

import time
import math

def calculate_time(func):
    def inner1(*args, **kwargs):
        begin = time.time()
        func(*args, **kwargs)
        end=time.time()
        print("Total time taken in: ", func.__name__, end - begin)
    return inner1

@calculate_time # also callable this way
def factorial(num):
    time.sleep(2)
    print(math.factorial(num))

factorial(3)

# as you can see, we created a decorator
# with a start time and an end time
# which prints the difference between the two
# as long as the function executes
# this decorator exists for ANY functon that it wraps around

# let's try one more... which returns a value

def sup_decorator(func):
    def inner1(*args, **kwargs):
        print("before execution")
        returnedValue = func(*args, **kwargs) # execute function here
                                              # though we don't know it does
        print("after execution")
        return returnedValue # return value outside of local
    return inner1 # return result of function too

@sup_decorator
def sum_two_numbers(a, b):
    return a + b

a, b = 1, 2

print("Sum=", sum_two_numbers(a, b))
