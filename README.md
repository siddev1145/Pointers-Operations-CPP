# Pointer-Operations-CPP

## Experiment 10

## Aim
To explore pointer operations.

## Software Used
VS Code

## Theory
In C++, functions can accept parameters in different ways, which affects how they manipulate the values. The two common methods are Call by Reference and Call by Value.

### Call by Reference
**Definition:** This method passes the address of the actual parameters to the function, allowing it to modify the original values.

**Working:** The function uses pointers to the variables, so any changes made within the function directly affect the original variables.

### Call by Value
**Definition:** This method passes a copy of the actual parameters to the function. Changes made to these copies do not affect the original variables.

**Working:** The function operates on the copies, leaving the original variables unchanged.

| Features                | Call by Reference                     | Call by Value                        |
|-------------------------|---------------------------------------|--------------------------------------|
| **Definition**          | Passes the address of the parameter. | Passes a copy of the parameter.      |
| **Function Parameters** | Receives pointers to the original variables. | Receives copies of the original values. |
| **Effect on Original Data** | Modifies the original data.         | Does not modify the original data.   |
| **Example**             | `void swap(int *x, int *y)`          | `void swap(int x, int y)`            |
| **Modification of Values** | Changes affect the original variables. | Changes do not affect the original variables. |
| **Memory Usage**        | Uses memory for pointers.             | Uses memory for copies of values.    |
| **Performance**         | More efficient for large structures.  | Can be less efficient due to copying. |
| **Use**                | When the function needs to modify inputs. | When the function should not alter inputs. |

## Algorithms
### Call by Value
1. **Start**
2. **Define Function `swap(int x, int y)`**
   - **Input:** Two integers `x` and `y`
   - **Output:** Swapped values of `x` and `y`
   - **Steps:**
     1. Create a temporary variable `temp`
     2. Assign `x` to `temp`
     3. Assign `y` to `x`
     4. Assign `temp` to `y`
3. **In `main` Function**
   - Define integers `a` and `b` as 5 and 2
   - Call `swap(a, b)`
   - Print `a` and `b`
4. **End**

### Call by Reference
1. **Start**
2. **Define Function `swap(int *x, int *y)`**
   - **Input:** Pointers to two integers
   - **Output:** Swapped values at the addresses pointed to by `x` and `y`
   - **Steps:**
     1. Create a temporary variable `temp`
     2. Set `temp` to the value pointed to by `x`
     3. Set the value at `x` to the value at `y`
     4. Set the value at `y` to `temp`
3. **In `main` Function**
   - Define integers `a` and `b` as 5 and 2
   - Call `swap(&a, &b)`
   - Print `a` and `b`
4. **End**

## Conclusion
We learned about pointer operations and how to use call by reference and call by value in functions.
