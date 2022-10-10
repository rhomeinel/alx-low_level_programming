# 0x1E. C - Search Algorithms

## Resources
- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)

### Extra files
- [Jump search in a singly linked list ](./listint)
- [Linear search in a skip list](./skiplist)

## Table of contents
Files | Description
----- | -----------
[search_algos.h](./search_algos.h) | Header File
[0-linear.c](./0-linear.c) | Function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search). Prototype : ```int linear_search(int *array, size_t size, int value);```
[1-binary.c](./1-binary.c) | Function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm). Prototype : ```int binary_search(int *array, size_t size, int value);```
[2-O](./2-O) | ```time complexity``` (worst case) of a linear search in an array of size ```n```
[3-O](./3-O) | ```space complexity``` (worst case) of an iterative linear search algorithm in an array of size ```n```
[4-O](./4-O) | ```time complexity``` (worst case) of a binary search in an array of size ```n```
[5-O](./5-O) | ```space complexity``` (worst case) of a binary search in an array of size ```n```
[6-O](./6-O) | space complexity of this function / algorithm
[100-jump.c](./100-jump.c) | Function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search). Prototype : ```int jump_search(int *array, size_t size, int value);```
[101-O](./101-O) | ```time complexity``` (average case) of a jump search in an array of size ```n```, using ```step = sqrt(n)```
[102-interpolation.c](./102-interpolation.c) | Function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://en.wikipedia.org/wiki/Interpolation_search). Prototype : ```int interpolation_search(int *array, size_t size, int value);```
[103-exponential.c](./103-exponential.c) | Function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search). Prototype : ```int exponential_search(int *array, size_t size, int value);```
[104-advanced_binary.c](./104-advanced_binary.c) | Function that searches for a value in a sorted array of integers. Prototype : ```int advanced_binary(int *array, size_t size, int value);```
[105-jump_list.c](./105-jump_list.c) | Function that searches for a value in a sorted list of integers using the Jump search algorithm. Prototype : ```listint_t *jump_list(listint_t *list, size_t size, int value);```
[106-linear_skip.c](./106-linear_skip.c) | Function that searches for a value in a sorted skip list of integers. Prototype : ```skiplist_t *linear_skip(skiplist_t *list, int value);```
[107-O](./107-O) | ```time complexity``` (average case) of a jump search in a singly linked list of size ```n```, using ```step = sqrt(n)```
[108-O](./108-O) | ```time complexity``` (average case) of a jump search in a skip list of size ```n```, with an express lane using ```step = sqrt(n)```
