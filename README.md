# Add Two Numbers

This repository contains a C++ implementation of the linked-list addition problem commonly known as "Add Two Numbers."

`new.cpp` defines a `ListNode` type and a `Solution::addTwoNumbers` method. Each linked list stores a non-negative integer in reverse digit order. The method adds the two inputs digit by digit, carries overflow to the next position, and returns a newly allocated result list.

The included example adds `[2,4,3]` and `[5,6,4]`, which represent 342 and 465, and prints `[7,0,8]`, representing 807.

## Build and run

```bash
g++ -std=c++17 new.cpp -o new
./new
```

Expected output:

```text
[7,0,8]
```
