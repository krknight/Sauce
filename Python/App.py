# https://www.youtube.com/watch?v=rfscVS0vtbw
# Learning Python - Full Course for Beginners
# freeCodeCamp.org
# Giraffe Academy

# https://docs.python.org/3/py-modindex.html

from math import * # math is a module
import useful_tools
# from useful_tools import *

## Getting started
# name = "John"
# age = 70
# is_male = True
#
# print("There once was a man named " + name + ", ")
# print("he was " + str(age) + " years old. ")

## strings
# phrase = "Giraffe Academy"
# print(phrase.upper().isupper())
# print(len(phrase))
# print(phrase[0])
# print(phrase.index("a"))
# print(phrase.replace("Giraffe", "Elephant"))

## numbers
# print(-2.0987)
# print(pow(3,2)) # 3 to the power of 2
# print(max(4,6)) # find max number
# print(min(4,6))
# print(round(3.7))
## import python math... from math import *
# print(floor(3.7)) # 3
# print(ceil(3.7)) # 4
# print(sqrt(36))

## Getting input from a user
# name = input("Enter you name: ")
# age = input("Enter you age: ")
# print ("Hello " + name + "! Your are " + age)

## Building a basic calculator
# num1 = input("Enter a number: ")
# num2 = input("Enter another number: ")
# result = float(num1) + float(num2) # replaced int with float
# print(result)

## Mad Libs Game
## print("Roses are red")
## print("Violets are blue")
## print("I love you")

# color = input("Enter a color: ")
# plural_noun = input("Enter a Plural Noun: ")
# celebrity = input("Enter a celebrity: ")
#
# print("Roses are " + color)
# print(plural_noun + " are blue")
# print("I love "  + celebrity)

## Lists
# friends = ["Kevin", "Karen", "Jim", "Oscar", "Toby"]
# print(friends)
# print(friends[1])
# print(friends[-2]) # negatives work from the back of the list
# print(friends[1:]) # from 1 and above
# print(friends[1:3]) # from Karen ending before Oscar
# friends[1] = "Mike" # can modify a value in the list

## List Functions
# lucky_numbers = [42, 8, 15, 16, 23]
# friends = ["Kevin", "Karen", "Jim", "Oscar", "Toby"]
# # friends.extend(lucky_numbers) # add two lists together
# friends.append("Creed") # append onto the end of the list
# friends.insert(1, "Kelly") # insert Kelly in to index 1
# friends.remove("Jim") # remove Jim from the list
# friends.pop() # remove the end item in the list
# print(friends.count("Jim")) # count how many times Jim is in the list
# print(friends.index("Kevin")) # is Kevin is in the list (returns index)
# # friends.clear() # clear the list completely
# friends.sort()
# print(friends)
# lucky_numbers.sort()
# print(lucky_numbers)
# lucky_numbers.reverse()
# print(lucky_numbers)
# friends2 = friends.copy() # copy friends

## Tuples - for data that is never going to change
# coordinates = (4, 5) # immutable, can't change.
# print(coordinates[0]) # prints 4
# print(coordinates[1]) # prints 5
# coordinate_list = [(4, 5), (6, 7), (80, 34)] # a list of tuples

## Functions
# def say_hi(greeting, message):
#     name = input("Enter your name: ")
#     print(greeting + " " + name + " " + message)
# say_hi("Hello", "how are you?")

## Return statement
# def cube(num):
#     return pow(num, 3) # num to the power of 3
#
# print(cube(4))

## If Statements
# is_male = False
# is_tall = False
#
# if is_male and is_tall: # or can be replace with and
#     print("You are a tall male")
# elif is_male and not(is_tall):
#     print("You are a short male")
# elif not(is_male) and is_tall:
#     print("You are not a male but are tall")
# else:
#     print("You are not a male and not tall")

## If Statements and Comparisons
# def max_num(num1, num2, num3):
#     if num1 >= num2 and num1 >= num3:
#         return num1
#     elif num2 >= num1 and num2 >= num3:
#         return num2
#     else:
#         return num3
#
# print(max_num(300,40,5))

## Building a better calculator
# num1 = float(input("Enter first number: "))
# op = input("Enter operator: ")
# num2 = float(input("Enter second number: "))
#
# if op == "+":
#     print(num1 + num2)
# elif op == "-":
#     print(num1 - num2)
# elif op == "/":
#     print(num1/num2)
# elif op == "*":
#     print(num1 * num2)
# else :
#     print("Invalid operator")

## Dictionaries - stores info in key value pairs
# monthConversions = {
#     "Jan": "January",
#     "Feb": "February",
#     "Mar": "March",
#     "Dec": "December",
# }
#
# print(monthConversions["Mar"])
# print(monthConversions.get("De","Not a valid key"))

## While loop
# i = 1
# while i <= 10:
#     print(i)
#     i += 1
#
# print("Done with loop")

## Building a Guessing Game 2:20
# secret_word = "giraffe"
# guess = ""
# retry = 1
# guess_limit = 3
#
# while guess != secret_word and retry <= guess_limit:
#     guess = input("Enter guess: ")
#     retry+=1
#
# if retry >= guess_limit:
#     print("Out of guesses")
# else:
#     print("You guessed right, the secret word is: " + secret_word)

## For Loop
# friends = ["Jim", "Karen", "Kevin"]
# for index in range(len(friends)):
#     print(friends[index])
# for friend in friends:
#     print(friend)
# for letter in "Giraffe Academy":
#     print(letter)
# for index in range(3,10):
#     print(index)
# for index in range(5):
#     if index == 0:
#         print("First Iteration")
#     else:
#         print("Not first")

## Exponent Function
# print(2**3) # 2 to the power of 3 = 8
# def raise_to_power(base_num, pow_num):
#     result = 1
#     # multiple base_num by itself pow_num times
#     for num in range(pow_num):
#         result *= base_num
#     print(str(base_num) + " to the power of " + str(pow_num) + " = " + str(result))
#
# raise_to_power(3,4)

## 2D Lists and Nested Loops
# number_grid = [
#     [1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9],
#     [0]
# ]
#
# print(number_grid[2][1])
#
# for row in number_grid:
#     for col in row:
#         print(col)

## Build a Translator
# Giraffe Language
# All vowels AEIOU become g

# def translate(phrase):
#     translation = ""
#     for letter in phrase:
#         # if letter in "AEIOUaeiou":
#         if letter.lower() in "aeiou":
#             if letter.isupper():
#                 translation = translation + "G"
#             else:
#                 translation = translation + "g"
#         else:
#             translation = translation + letter
#     return translation
#
# print(translate(input("Enter a phrase: ")))

## Comment
'''
Add comment here
and here
'''

## Try Except

# try:
#     number = int(input("Enter a number: "))
#     print(number)
#     value = 10/0
# except ValueError:
#     print("NaN!")
# except ZeroDivisionError as err:
#     print("Divide by zero! " + "Error: " + str(err))

## Reading Files

# employee_file = open("employees.txt", "r")  # "r" "w" "a" "r+" r+ is read and write
#
# # print(employee_file.readable())
# # print(employee_file.readline())
# # print(employee_file.readlines())
#
# for employee in employee_file.readlines():
#     print(employee)
#
# employee_file.close()

## Writing to Files
# employee_file = open("employees.txt", "a")
# # print(employee_file.read())
# print(employee_file.write("Toby - Human Resources"))
# print(employee_file.write("\nKelly - Customer Service"))
# employee_file.close()

## Modules and pip - a module is a python file we can import into our existing python file
# print(useful_tools.roll_dice(10))

# Add a module
# Google python-docx
# GitHub has python-docx
# pip3 --version
# pip3 install python-docx
# python-docx gets put in site-packages

## Classes and objects
