For Loop
A for loop is used to repeat a block of code for a specified number of times.


for (init; condition; increment) {
    // code to be executed
}


- init: initialization of the loop variable
- condition: condition to be checked before each iteration
- increment: increment or decrement of the loop variable

Example:


for (int i = 0; i < 5; i++) {
    std::cout << i << std::endl;
}

 While Loop
A while loop is used to repeat a block of code while a certain condition is true.


while (condition) {
    // code to be executed
}


Example:


int i = 0;
while (i < 5) {
    std::cout << i << std::endl;
    i++;
}

Do-While Loop
A do-while loop is similar to a while loop, but the code inside the loop is executed at least once before the condition is checked.


do {
    // code to be executed
} while (condition);


Example:


int i = 0;
do {
    std::cout << i << std::endl;
    i++;
} while (i < 5);


