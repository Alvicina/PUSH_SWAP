The aim of this project is to sort data on a stack, with a limited set of instructions, and the smallest number of moves. In order to do this, we need to implement a sorting algorithm that will sort the data using up to a max number of instruction. The set of instructions that can be used is the following:

sa (swap a): Swap the first 2 elements at the top of stack a.

Do nothing if there is only one or no elements.

sb (swap b): Swap the first 2 elements at the top of stack b.

Do nothing if there is only one or no elements.

ss : sa and sb at the same time.

pa (push a): Take the first element at the top of b and put it at the top of a.

Do nothing if b is empty.

pb (push b): Take the first element at the top of a and put it at the top of b.

Do nothing if a is empty.

ra (rotate a): Shift up all elements of stack a by 1.

The first element becomes the last one.

rb (rotate b): Shift up all elements of stack b by 1.

The first element becomes the last one.

rr : ra and rb at the same time.

rra (reverse rotate a): Shift down all elements of stack a by 1.

The last element becomes the first one.

rrb (reverse rotate b): Shift down all elements of stack b by 1.

The last element becomes the first one.

rrr : rra and rrb at the same time.

The program needs to behave as the example provided below:
![Screenshot 2024-09-09 at 12-39-16 365616380-770c6545-b454-4d20-a3e5-fb87bcc5640f png (PNG Image 1299 × 1649 pixels) — Scaled (54%)](https://github.com/user-attachments/assets/c449df62-e9e0-405a-831c-55e84694fb74)


The algorithm used to sort the data is called "radix algorithm". I chose this algorithm due to the fact that it is very stable and relatively easy to implement:
https://www.geeksforgeeks.org/radix-sort/


[README_PUSH_SWAP.pdf](https://github.com/Alvicina/PUSH_SWAP/files/15310128/README_PUSH_SWAP.pdf)
