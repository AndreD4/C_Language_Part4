# ArraysAndVectors

* What are they?

* Why we use arrays

* Declaration and initialization

* Accessing arrays elements

* Multi-dimensional arrays

* vectors what they are

* Advantages vs. arrays

* Declaration and initialization 

# Arrays

* What is an array?

* Compound data type or data structure
  
   - Collection of elements

* All elements are of the same type.

* Each element can be access directly.


* Why do we need arrays?


Suppose we need to model my test scores in a class.

That's pretty easy. We've already seen how to use variables and this would be a perfect use of variables.

So suppose I have three test scores that I need to track,

and they're all graded as integers out of a 100.

I can simply declare three variables as integers, give them meaningful names,

initialize them to 0 or to whatever values I wish.

But what if I need to model more than just a few test scores.

Suppose I'm a school administrator, and I need to model the test scores for

100 students,

so that I could do some statistics on them.

Modeling each one of them as its own variable with its own name

can quickly get out of control.

Now I have to keep track of 100 variable names.

You could still do it but it becomes tedious and error prone.

* Characteristics

  - Fixed sizes
  
  - Elements are all the same type
 
  - Stored continuously in memory
 
  - Individual elements can be accessed by their position or index.
 
  - First element is at index 0.
 
  - Last element is at index size -1.
 
  - No checking to see if you are not out of bounds.
 
  - Always initialize arrays
 
  - very efficient
 
  - Iteration (looping) is often used to process.
 
  # Declaring & initialization


* The syntax for an array declaration is very simple.

First, we write the type of each element in the array.

This is followed by the name of the array variable.

Then we provide square brackets which is the array indexing operator.

And in the square brackets, we provide the size that we want the array to be.

Remember, this size is fixed, so the compiler must know the size

of whatever's in the square brackets at compile time.

So this can be a constant literal.

It can be a declared constant or constant expression.

We can also initialize arrays when we declare them, and it's good practice to do so.

The syntax is similar to when we initialize primitive variables.

We include an initialization list after the declaration.

In this list, we can provide as many initializers as we like

separated by commas.


* How does it work?

* The name of array represents the location of the first element in array (index 0)

* the [index] represents the offset from the beginning of the array.

* C++ simply performs a calculation to find the correct element.

* Remeber - no bounds checking!



















 
