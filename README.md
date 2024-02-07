The objective of this assignment is to practice implementing recursive functions in C to solve various problems.

Tasks:

Special Copy Function (special_copy):

Implement a recursive function called special_copy that copies a string from the source to the destination while skipping spaces.
The function should recursively copy characters from the source to the destination, excluding space characters.
Use character pointers to traverse the strings.
Equal Pairs Function (equal_pairs):

Implement a recursive function called equal_pairs that finds the number of equal pairs in an integer array.
The function should not count intersections as pairs (e.g., [5, 5, 5, 6] should count as 1 pair, not 3 pairs).
Recursively check pairs of elements in the array and count the number of pairs where consecutive elements are equal.
Word Count Function (word_count_rec):

Implement a recursive function called word_count_rec that counts the number of words in a string.
The function should consider consecutive spaces as a single delimiter between words.
Recursively count the number of spaces and non-space characters to determine the number of words in the string.
Fibonacci Function (fibo):

Implement a recursive function called fibo that calculates the nth Fibonacci number.
Use the definition f(n) = f(n-2) + f(n-1) to recursively compute the Fibonacci number at position n.
Base cases: f(0) = 1 and f(1) = 1.
Tower of Hanoi Function (hanoi):

Implement a recursive function called hanoi to solve the Tower of Hanoi problem.
The Tower of Hanoi problem involves moving n disks from one peg to another peg while obeying the rules:
Only one disk can be moved at a time.
Each move consists of taking the top disk from one stack and placing it on top of another stack.
No disk may be placed on top of a smaller disk.
Print the sequence of moves required to solve the Tower of Hanoi problem for n disks.
Expected Output:

Test each recursive function with sample inputs and provide the output.
Demonstrate the correctness of each function's implementation with meaningful outputs and explanations.
