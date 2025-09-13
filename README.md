# 🚀 Polymorphism in C++

This repository contains **C++ programs (exp13a – exp13f)** that demonstrate **polymorphism**, a fundamental principle of **Object-Oriented Programming (OOP)**.  
Polymorphism allows **one interface to have multiple implementations**.

---

## 🔹 Types of Polymorphism  

* **Compile-time (Static Polymorphism)** → Achieved using **constructor overloading, function overloading, and operator overloading**.  
* **Runtime (Dynamic Polymorphism)** → Achieved using **virtual functions and overriding** (not covered here).  

---

## 📂 Program Files (exp13 – Polymorphism)

---

### `exp13a.cc`: Constructor Overloading  

**Algorithm:**

1. Program starts.  
2. User inputs two integers → creates `Add` object → constructor `Add(int,int)` is called.  
3. User inputs two floats → constructor `Add(float,float)` is called.  
4. User inputs three integers → constructor `Add(int,int,int)` is called.  
5. Each constructor calculates & prints the sum.  

---

### `exp13b.cc`: More Constructor Overloading  

**Algorithm:**

1. Create `Bank` object `acc1` → parameterized constructor initializes with balance `0.0`.  
2. Create `Bank` object `acc2` → constructor initializes with given deposit.  
3. Create `Bank` object `acc3` → copy constructor duplicates account details.  
4. Confirmation messages printed for each account.  

---

### `exp13c.cc`: Function Overloading  

**Algorithm:**

1. Create `Math` object `m`.  
2. Call `m.add(10,20)` → matches `add(int,int)` → returns 30.  
3. Call `m.add(5,15,25)` → matches `add(int,int,int)` → returns 45.  
4. Call `m.add(2.5f,3.5f)` → matches `add(float,float)` → returns 6.  

---

### `exp13d.cc`: More Function Overloading  

**Algorithm:**

1. Create `Pizza` object `shop`.  
2. Call `orderPizza("Margherita")` → returns regular pizza order.  
3. Call `orderPizza("Pepperoni","Medium")` → returns sized pizza order.  
4. Call `orderPizza("Veggie","Large",true)` → returns pizza with extra cheese.  

---

### `exp13e.cc`: Operator Overloading (`+` for Complex Numbers)  

**Algorithm:**

1. Create two `Complex` objects `c1(10,5)` and `c2(2,4)`.  
2. Expression `c1 + c2` invokes overloaded `operator+`.  
3. A new `Complex` object is returned with values `(12, 9)`.  
4. Print final result.  

---

### `exp13f.cc`: More Operator Overloading (`+` for Songs)  

**Algorithm:**

1. Create three `Song` objects (`s1`, `s2`, `s3`).  
2. Expression `s1 + s2 + s3` executes left-to-right:  

   * `s1 + s2` → new song `"Shape of You & Perfect"`.  
   * Result + `s3` → new song `"Shape of You & Perfect & Galway Girl"`.  

3. Print the final playlist.  

---

## 🔹 Types of Overloading (in short)

1. **Constructor Overloading** → Multiple constructors with different parameters to initialize objects in different ways.  
2. **Function Overloading** → Same function name but different parameter lists for flexible behavior.  
3. **Operator Overloading** → Redefining operators (`+`, `-`, etc.) to work with user-defined types.  

---

## 📊 Summary Table  

| File        | Concept                 | Class Used | Example Demonstrated                                   | Key Point                                                     |
| ----------- | ----------------------- | ---------- | ------------------------------------------------------ | ------------------------------------------------------------- |
| `exp13a.cc` | Constructor Overloading | `Add`      | Sum of 2 ints, 2 floats, 3 ints                        | Shows different constructors initializing objects differently |
| `exp13b.cc` | Constructor Overloading | `Bank`     | Zero balance, initial deposit, copy constructor        | Demonstrates account creation in multiple ways                |
| `exp13c.cc` | Function Overloading    | `Math`     | `add(int,int)`, `add(int,int,int)`, `add(float,float)` | Same function name with different parameter lists             |
| `exp13d.cc` | Function Overloading    | `Pizza`    | Order by type, type+size, type+size+extraCheese        | Real-world function overloading scenario                      |
| `exp13e.cc` | Operator Overloading    | `Complex`  | `c1 + c2` → adds complex numbers                       | Redefines `+` for custom class                                |
| `exp13f.cc` | Operator Overloading    | `Song`     | `s1 + s2 + s3` → playlist creation                     | Redefines `+` to concatenate songs                            |

---

## 🎯 Key Takeaways  

* **Constructor Overloading** → Different ways of initializing objects.  
* **Function Overloading** → Same function name, different parameter lists.  
* **Operator Overloading** → Redefine operators for user-defined types.  
* Together, they demonstrate **compile-time polymorphism** in C++.  

---
