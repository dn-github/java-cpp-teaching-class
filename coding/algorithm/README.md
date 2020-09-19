# Data Structure

Following are the most popular data structures we should know.

## Array
Insert element at end => ```O(1)``` <br>
Insert element at an index which is not end => ```O(N)``` <br>
Access element at an Index => ```O(1)``` <br>
Delete element at end => ```O(1)``` <br>
Delete element at an index which is not end => ```O(N)``` <br>
Search an element => ```O(N)``` <br>

### C++ Implementation
```[]```, ```Array``` and ```Vector``` <br>

#### Available functions
```[]```
```size``` <br>
```empty``` <br>
```push_back``` <br>
```pop_back``` <br>
```insert``` (by iterator) <br>
```erase``` (by iterator) <br>
```begin``` <br>
```end``` <br>
```clear``` <br>
 
### Java Implementation
```[]```, ```ArrayList``` <br>


## Linked List

### Single Linked List
Insert element at beginning => ```O(1)``` <br>
Insert element at an index which is not beginning => ```O(N)``` <br>
Insert element after a given element => ```O(1)``` <br>
Access element at an index => ```O(N)``` <br>
Access element at a reference => ```O(1)``` <br>
Delete element at an index => ```O(N)``` <br>
Delete a given reference => ```O(N)``` <br>
Search an element => ```O(N)``` <br>

### Double Linked List
Insert element at beginning => ```O(1)``` <br>
Insert element at an index which is not beginning => ```O(N)``` <br>
Insert element after a given element => ```O(1)``` <br>
Access element at an index => ```O(N)``` <br>
Access element at a reference => ```O(1)``` <br>
Delete element at an index => ```O(N)``` <br>
Delete a given reference => ```O(1)``` <br>
Search an element => ```O(N)``` <br>

#### C++ Implementation
```list``` <br>

##### Available functions
```size``` <br>
```empty``` <br>
```push_back``` <br>
```push_front``` <br>
```pop_back``` <br>
```pop_front``` <br>
```clear``` <br>
```insert``` (by iterator) <br>
```erase``` (by iterator) <br>
```remove``` (by value) <br>
```begin``` <br>
```end``` <br>
```front``` <br>
```back``` <br>
```clear``` <br>

## String
It is same as an array of characters.

### C++ Implementation
```string``` <br>
For use case, see stringPractice.cpp in ```coding```

#### Available functions
```[]```
```size``` <br>
```length``` <br>
```empty``` <br>
```push_back``` <br>
```pop_back``` <br>
```insert``` (by iterator) <br>
```find``` (by character, by string) <br>
```erase``` (by iterator, by iterator range, by index and length) <br>
```replace``` (by iterator range, by index and length) <br>
```substr``` (by index and length) <br>
```compare``` <br>
```begin``` <br>
```end``` <br>
```clear``` <br>

## Stack
Stack is a data structure with ```First in Last out``` feature. Insertion, removal and access can only be done at/from the top. 

Insert element => ```O(1)``` <br>
Remove element => ```O(1)``` <br>
Access element => ```O(1)``` <br>

### C++ Implementation
```stack```

#### Available functions
```push``` <br>
```pop``` <br>
```top``` <br>
```size``` <br>
```empty``` <br>

## Queue
Queue is a data structure with ```First in First out``` feature. Insertion, removal and access can only be done at/from the front. 

Insert element => ```O(1)``` <br>
Remove element => ```O(1)``` <br>
Access element => ```O(1)``` <br>

### C++ Implementation
```queue```

#### Available functions
```push``` <br>
```pop``` <br>
```front``` <br>
```back``` <br>
```size``` <br>
```empty``` <br>

## Hash Map
Hash Map is also called ```dictionary``` data structure. Each element in a HashMap is a {Key, Value} pair. Each key is indexed inside the data structure. Locating a key is two steps process. HashMap first calculates the index of the key using a hash function. Then it access the element from that Index. Size of a HashMap is not the same as the number of elements. 

Insert element => ```O(1)``` <br>
Remove element => ```O(1)``` <br>
Access element => ```O(1)``` <br>

### C++ Implementation
```unordered_map```

#### Available Functions
```[]``` <br>
```size``` <br>
```empty``` <br>
```count``` (by key) <br>
```erase``` (by iterator, by key) <br>
```find``` (by key) <br>
```insert``` (inserting pair)<br>
```clear``` <br>
```begin``` <br>
```end``` <br>

## Hash Set
Hash Set is also called ```dictionary``` data structure. It is exactly similar to ```HashMap```, except that it is not {Key, Value} pair. HashSet is defined for single elements. Size of a HashSet is not the same as the number of elements. 

Insert element => ```O(1)``` <br>
Remove element => ```O(1)``` <br>
Access element => ```O(1)``` <br>

### C++ Implementation
```unordered_set```

#### Available Functions
```size``` <br>
```empty``` <br>
```count``` (by key) <br>
```erase``` (by iterator, by key) <br>
```find``` (by key) <br>
```insert``` (inserting key)<br>
```clear``` <br>
```begin``` <br>
```end``` <br>


## Ordered Map
Ordered Map keeps the elements sorted by key. So we can imagine this as a sorted array. 

Insert element => ```O(logN)``` <br>
Remove element => ```O(logN)``` <br>
Access/Find element => ```O(logN)``` <br>

### C++ Implementation
```map```

#### Available Functions
```[]``` <br>
```size``` <br>
```empty``` <br>
```count``` (by key) <br>
```erase``` (by iterator, by key) <br>
```find``` (by key) <br>
```insert``` (inserting pair)<br>
```clear``` <br>
```begin``` <br>
```end``` <br>

## Ordered Set
Ordered Set keeps the elements sorted by key. So we can imagine this as a sorted array. This differs from ```Ordered Map``` since it only deals with single values, not {key, value} pair.

Insert element => ```O(logN)``` <br>
Remove element => ```O(logN)``` <br>
Access element => ```O(logN)``` <br>

### C++ Implementation
```set```

#### Available Functions
```size``` <br>
```empty``` <br>
```count``` (by key) <br>
```erase``` (by iterator, by key) <br>
```find``` (by key) <br>
```insert``` (inserting value) <br>
```clear``` <br>
```begin``` <br>
```end``` <br>