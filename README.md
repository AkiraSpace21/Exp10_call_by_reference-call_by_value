# **Experiment: Call by Value and Call by Reference in C++**

### **Name:** Jay Paygude  
### **PRN:** 24070123050  
### **Batch:** ENTC A2  

---

## **Overview**
In C++, the way arguments are passed to functions changes how they behave. Mainly, we have two methods: **Call by Value** and **Call by Reference**.

- **Call by Value:** A duplicate (copy) of the original variable is sent to the function. Any changes done inside stay only inside the function.  
- **Call by Reference:** The real variable (through reference or pointer) is given to the function, so any changes are directly reflected outside too.  

Pointers can also be used for reference-type behavior. Knowing the difference between these is important to avoid logical errors while coding.

---

## **1. Code Name: Swap using Value Parameters**
### **Explanation**
This program shows the idea of **Call by Value**. The swap function gets two integers, but they are only copies. So, the swapping happens inside the function only, and the actual numbers in `main()` don’t change.

### **Steps**
1. Create a function that takes two integers normally (by value).  
2. Swap them inside using a temp variable.  
3. Call this function from `main()`.  
4. Print the numbers after the call – they remain the same.  

---

## **2. Code Name: Swap using Pointers**
### **Explanation**
This example uses **pointers** to swap numbers. Since the function works with addresses, dereferencing lets us actually change the original values in memory.

### **Steps**
1. Define a function that takes two integer pointers.  
2. Swap values by dereferencing them.  
3. Pass addresses of two numbers while calling the function.  
4. Print values before and after to see the change.  

---

## **3. Code Name: Swap using References**
### **Explanation**
This program makes use of **C++ references**. References act like aliases for variables, so changes in the function directly affect the originals.

### **Steps**
1. Write a function with reference parameters.  
2. Swap using a temporary variable.  
3. Call the function normally with two integers.  
4. Print before and after to notice the difference.  

---

## **4. Code Name: Employee Info and Salary Update**
### **Explanation**
Here, both call by value and reference are used together. One function checks eligibility using normal (by value) parameters. Another function increases salary (20%) using a reference parameter so the original salary is updated.

### **Steps**
1. Take input: employee name, research project done, publication done, profit, pipeline project, and salary.  
2. Check if at least 3 conditions are satisfied → Eligible.  
3. If eligible, call function that updates salary using reference.  
4. Show result: eligibility and new salary.  

---

## **5. Code Name: Changing Array Element**
### **Explanation**
This program demonstrates modifying an array element by using its address. Passing the pointer of an element allows us to overwrite the actual value in the array.

### **Steps**
1. Initialize an array of 5 numbers.  
2. Show the array.  
3. Input which index to modify and the new value.  
4. Pass the address of that element to a function.  
5. Function updates value using pointer.  
6. Print array after modification.  
