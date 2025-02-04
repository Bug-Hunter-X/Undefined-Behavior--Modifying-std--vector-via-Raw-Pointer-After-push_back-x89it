# Undefined Behavior in C++: Modifying std::vector via Raw Pointer After push_back

This repository demonstrates a common C++ error involving undefined behavior when modifying a `std::vector` using a raw pointer after adding elements via `push_back`.  The vector's internal storage might be reallocated, leading to unexpected results or crashes.  The example highlights the safe and unsafe ways to manipulate `std::vector` contents.

**Key Concepts:**

* `std::vector` internal memory management
* Raw pointers and memory safety
* Undefined behavior in C++

**How to reproduce:**

1. Clone the repository.
2. Compile and run `bug.cpp`. (Observe the potential undefined behavior)
3. Compile and run `bugSolution.cpp`. (Observe the safe and correct approach)