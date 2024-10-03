# Input and Output
Input: Input is any kind of data tht is taken from the user or from ans external source. There are many types of input like,
 1.USER INPUT 
 2.FILE INPUT 
 3.NETWORK INPUT 
 4.SENSOR INPUT etc.

Output: Output is a data which is collected by externaly and given or executes a summary  of data or value to external destination.

Here's the example of a input in PYTHON ,C++ & JS(JAVASCRIPT)

## Python  

Input: Reading a user's age

```
name = input("Enter your age: ")

```

Output: Displaying value

```
print("Hello World")

```
## C++

Input: Displaying a users number


```
#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number; // Taking input from the user by "cin"
    cout << "You entered: " << number << endl;
    return 0;
}

```

Output: Displaying value

```
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl; // Output "hello  world" to the console
    return 0;
}


```
## JS

Input: Displaying a users number

```
let number = prompt("Enter a number:"); // Taking input from the user

```
Output: Displaying value

```
console.log("Hello, World!"); // Output to the console

```

# Variables/Array

Variables: variable is a input that holds a value  to a particular storage location  or in memory location whih can be changes during the execution. It is important for manupulating data & it should be declared for execution. 
there are different types of variables like 
1. INTEGER
2. DOUBLE
3. FLOAT
4. STRING   

Variable example:
  
## Python

```
age = 25  // Here, 'age' is a variable of a integer type

```
## C++

```
#include <iostream>
using namespace std;

int main() {
    int age = 25;          // Integer variable
    double height = 5.9;   // Double variable
    string name = "Alice"; // String variable

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;

    return 0;
}

```
## JS 

```
let age = 25;          // Integer variable
let height = 5.9;      // Float variable
let name = "Alice";    // String variable

console.log("Name: " + name);
console.log("Age: " + age);
console.log("Height: " + height);

```

Array: Array is a set of a data type which works with same kind of multiple data in a structured way. For work it needs the a data_type,n ame_type & the size of the data. Array can't work without loop.

## Python

```
numbers = [1, 2, 3, 4, 5]  // Declare and initialize a list
print("The numbers are:")
for number in numbers:
    print(number)  // Access and print each element

```
## C++

```
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array
    cout << "The numbers are: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " "; // Access and print each element
    }
    return 0;
}

```

## JS

```
let numbers = [1, 2, 3, 4, 5]; // Declare and initialize an array
console.log("The numbers are: ");
for (let i = 0; i < numbers.length; i++) {
    console.log(numbers[i]); // Access and print each element
}

```

# Conditionals

Conditionals: Conditionals is a state of programming where it allows a programme or compiler to make decision and execute the true or fasle value.It is essential for complex decision-making.Many kind of conditionals are like,
1. if
2. if-else
3. elif/else if
4. Switch 
5. Ternary (Sortrer version of if-else)  

## Python
//if

```
// The user to enter a number
number = int(input("Enter a number: "))

// Check if the number is greater than 0
if number > 0:
    // If the condition is true, print that the number is positive
    print(f"{number} is a positive number.")

```
//else-if

```
// The user to enter a number
number = int(input("Enter a number: "))

// Check if the number is greater than 0
if number > 0:
    // If the condition is true, print that the number is positive
    print(f"{number} is a positive number.")
else:
    // If the condition is false, print that the number is not positive
    print(f"{number} is not a positive number.")

```

//elif

```
// The user to enter a number
number = int(input("Enter a number: "))

// Check if the number is greater than 0
if number > 0:
    // If the condition is true, print that the number is positive
    print(f"{number} is a positive number.")
// Check if the number is equal to 0
elif number == 0:
    // If the condition is true, print that the number is zero
    print("The number is zero.")
else:
    // If none of the above conditions are true, print that the number is negative
    print(f"{number} is a negative number.")


```

## C++

//if 

```
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: "; 
    cin >> number; 

    // Check if the number is positive
    if (number > 0) {
        cout << "You entered a positive number: " << number << endl; // If true, print that the number is positive
    }

    cout << "This statement is always executed." << endl; // This line is always executed regardless of the if condition

    return 0; 
}

```
// else if

```
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is even
    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    }
    // If the number is not even, it must be odd
    else {
        cout << "The number is odd." << endl;
    }

    return 0;
}

```
//elif

```
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is positive
    if (number > 0) {
        cout << "You entered a positive number." << endl;
    }
    // If the number is zero
    else if (number == 0) {
        cout << "You entered zero." << endl;
    }
    // If the number is negative
    else {
        cout << "You entered a negative number." << endl;
    }

    return 0;
}

```
## JS

// If

```
let number = 10;

// Check if the number is greater than 5
if (number > 5) {
    console.log("The number is greater than 5.");
}

```

// if-else

```
let number = 10;

// Check if the number is greater than 5
if (number > 5) 
{
    console.log("The number is greater than 5.");
} 
 else
 {
    console.log("The number is 5 or less.");
 }

```

// elif

```
let temperature = 25;

// Check if the temperature is below 0
if (temperature < 0) {
    console.log("It's freezing!");
}
// Check if the temperature is between 0 and 15
else if (temperature >= 0 && temperature < 15) {
    console.log("It's cold.");
}
// Check if the temperature is between 15 and 25
else if (temperature >= 15 && temperature < 25) {
    console.log("It's cool.");
}
// If none of the above conditions are true, it must be warm
else {
    console.log("It's warm.");
}

```

# Loop

Loop: Loop is a structure that allows a particular part or block or codes to repeat based on a specific  condition.Array works on loop.There are three types of loops which is,
1. For
2. While
3. Do-while

## Python

//For

```
// List of fruits
fruits = ["apple", "banana", "cherry"]

// Iterate over each fruit in the list
for fruit in fruits:
    // Print the current fruit
    print(fruit)

```
//  while

```
// Initialize a counter variable
count = 1

// Continue looping while count is less than or equal to 5
while count <= 5:
    // Print the current count
    print(count)
    // Increment the count
    count += 1  // Same as count = count + 1

```
## C++

// For

```
#include <iostream>

int main() {
    // For loop that counts from 1 to 5
    for (int i = 1; i <= 5; i++) {
        std::cout << i << std::endl; // Print the current number
    }
    return 0;
}

```

// While

```
#include <iostream>

int main() {
    int count = 1; // Initialize the counter variable

    // Continue looping while count is less than or equal to 5
    while (count <= 5) {
        std::cout << count << std::endl; // Print the current count
        count++; // Increment the counter
    }

    return 0;
}

```
## JS

// For

```
// For loop that counts from 1 to 5
for (let i = 1; i <= 5; i++) {
    console.log(i); // Print the current number
}

```
// While

```
let count = 1; // Initialize the counter variable

// Continue looping while count is less than or equal to 5
while (count <= 5) {
    console.log(count); // Print the current count
    count++; // Increment the counter
}

```

# Functions

Functions: A function is a block of organized re-useable  code that works for a specific tasks & breaking problems.

## Python

```
def greet():
    print("Hello, world!")

// Calling the function
greet()

```
## C++

```
// Function with a variable number of arguments
function printArgs(...args) {
    for (const arg of args) {
        console.log(arg);
    }
}

printArgs("Hello", "world", 42); // Calling the function with multiple arguments

```
## JS

```
// Arrow function
const multiply = (x, y) => x * y;

// Calling the arrow function
const result = multiply(4, 5);
console.log("The product is:", result);

```
 