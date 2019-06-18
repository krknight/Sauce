from math import * # math is a module

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
is_male = False
is_tall = False

if is_male and is_tall: # or can be replace with and
    print("You are a tall male")
elif is_male and not(is_tall):
    print("You are a short male")
elif not(is_male) and is_tall:
    print("You are not a male but are tall")
else:
    print("You are not a male and not tall")

## If Statements and Comparisons