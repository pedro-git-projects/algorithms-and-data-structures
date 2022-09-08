# Big O

Best case: Ω

Average case: θ

Worst case: Ο (omicron/big O)

# Types

## O(n):

Consider the function:


```c++
void printItems(int n) {
	for(int i = 0; i < n; i++) {
		std::cout << i << std::endl;
	}
}

int main() {
	printItems(10);
}
```
This call will print all integers from 0 to 9.

This is a O(n) time complexity, since by instantiating n with 10 the loop was ran 10 (n) times.

O(n) is proportional and graphs as a straight line.

### Drop Constants

consider:

```c++
void printItems(int n) {
	for(int i = 0; i < n; i++) {
		std::cout << i << std::endl;
	}
for(int j = 0; j < n; j++) {
		std::cout << i << std::endl;
	}
}

int main() {
	printItems(10);
}
```

This function ran n + n times, or 2n. But we will drop the constant. So this function complexity is O(n) and not O(2n).

## O(n^2)

Consider now the following function:

```c++
void printItems(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			std::cout << i << j << endl;
		}
	}
}

int main() {
	printItems(10);
}
```

This will print all integers from 0 to 99. Thus it ran n * n, so O(n^2). 

Consider now:
```c++
void printItems(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < n; k++)
			std::cout << i << j << k << std::endl;
		}
	}
}

int main() {
	printItems(10);
}
```
This function will print all integers from 0 to 999, but we will still call O(n^2) and not O(n^3).

### Drop non dominants

```c++
void printItems(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			std::cout << i << j << std::endl;
		}
	}

	for(int k = 0; k < n; k++) {
		std::cout << k << std::endl;	
	}
}

int main() {
	printItems(10);
}
```

this function ran O(n^2 + n) it is conventional to drop n, the non dominant term.

## O(1)

```c++
int addItems(int n) {
	return n + n
}
```

Here, as n becomes larger, the number of operations is kept the same.

Notice also that, as with other cases if we had, for example:

```c++
int addItems(int n) {
	return n + n + n
}
```

We would still call it O(1) and not O(2).

## O(log n)

Consider a sorted array, for example:

[1, 2, 3, 4, 5, 6, 7, 8]

If we're looking for a number, we could test half of the array each time, for example:

[1, 2, 3, 4] <- may be here [5, 6, 7, 8] <- is not here

[1, 2] <- may be here [3, 4] <-  is not here

[1] <- is here

This means that for n = 8, we made 3 operations.

Just so happens that 2^3 = 8, or, in other words:

log_2 8 = 3

# Big o for vector types

Pushing and popping to the end are O(1).
```c++
myVector.push_back();
myVector.pop_back();
```

Inserting or erasing to the beggining will be O(n) because you need to change the index of each element 
```c++
myVector.erase(myVector.begin());
myVector.insert(myVector.begin(), value);
```
Inserting or erasing to arbitrary positions will also be O(n) because you need to change the index of each element 
```c++
myVector.insert(myVector.begin() + 1, value);
```

Looking up by value is O(n), but by index O(n).

