# C++ Examples for AI-Assisted Development

This directory contains popular C++ algorithms and data structures with detailed comments for AI learning and collaboration.

## Examples

### Binary Search (`binary_search.cpp`)

A comprehensive implementation demonstrating multiple binary search techniques:

- **Classic Binary Search**: Find any occurrence of a target value
- **Leftmost Search**: Find the first occurrence of a target value
- **Rightmost Search**: Find the last occurrence of a target value
- **Lower Bound**: Find the first element >= target
- **Upper Bound**: Find the first element > target

**Complexity:**
- Time: O(log n)
- Space: O(1)

**Build and Run:**
```bash
g++ -std=c++17 -O2 examples/binary_search.cpp -o examples/binary_search
./examples/binary_search
```

**Concepts Demonstrated:**
- Iterative binary search
- Overflow-safe midpoint calculation
- Edge case handling
- Range queries
- STL-like bound functions

## Running Examples

All examples are standalone and can be compiled with:

```bash
g++ -std=c++17 -O2 examples/[name].cpp -o examples/[name]
./examples/[name]
```

## Using with GitHub Copilot

When working with these examples in GitHub Copilot:

1. **Ask for variations**: "How would I modify this to use recursion?"
2. **Request optimizations**: "Can you optimize this for cache locality?"
3. **Seek explanations**: "Explain why we use `mid = left + (right - left) / 2`"
4. **Explore extensions**: "How would I extend this to handle duplicates?"

## Adding New Examples

When adding new examples:

1. Include comprehensive comments explaining the algorithm
2. Add complexity analysis (Time and Space)
3. Provide test cases demonstrating usage
4. Document edge cases and assumptions
5. Use C++17 features for clarity
6. Compile without warnings: `g++ -Wall -Wextra -std=c++17`

## Learning Resources

- [Big O Notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Algorithm Design Manual](https://www3.cs.stonybrook.edu/~algorith/)
- [C++ Reference](https://en.cppreference.com/)
