# \_printf

A printf-like function built from scratch, implementing most basic usage of printf, such as: prints strings, strings in arguments, integers, integers in arguments, and simulating regular printf most common behavior.

### Built-in functionsAfter verifying whether the string passed to \_printf is NULL or not, the \_printf function will continue evaluating each position to evaluate if it falls into one of the listed cases below. In order to get the parameters passed as arguments, it will evaluate whether the current and following position are, respectively % and s/c/d/i.
Some of the functions implemented within the main printf fuction are:

#### d\_funct and i\_functThese two functions receive an int as input. Int is treated as such and, every digit is retrieved through modulus and dision iterations. Digits are then converted into their ASCII representative number. They return the number of digits/characters printed.

#### s\_functThis function receives a string, counts it's characters and prints them out. Returns the number of characters printed.

#### c\_funct
Receives a single character as parameter, prints it out and returns 1 (which is the amount printed).
11:49

## Flowchart
![flowchart of _printf fuction](https://imgur.com/Ble2izm)

## Built With C ## 

Authors
* **Santiago Zapata Bedoya** - *Holberton Student* - [santizabe](https://github.com/santizabe)
* **Stiven Espinosa Zapata** - *Holberton Student* - [StivenZ](https://github.com/StivenZ)
