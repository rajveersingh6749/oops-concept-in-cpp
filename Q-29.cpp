// Q 29. Difference between Overloading and Overriding

/*

| Feature            | Overloading                              | Overriding                           |
| ------------------ | ---------------------------------------- | ------------------------------------ |
| When               | Compile-time                             | Run-time                             |
| Scope              | Same class                               | Different classes (inheritance)      |
| Function Signature | Must differ (args/type)                  | Must be same                         |
| Keyword            | None required                            | Requires `virtual`                   |
| Example            | `void show(int)` and `void show(double)` | `Base::show()` and `Derived::show()` |


*/