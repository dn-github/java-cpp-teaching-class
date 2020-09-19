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
```size``` <br>
```empty``` <br>
```push_back``` <br>
```insert``` (by iterator) <br>
```[]``` <br>
```pop_back``` <br>
```erase``` (by iterator) <br>
```size``` <br>
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

## Hash Set
Hash Set is also called ```dictionary``` data structure. It is exactly similar to ```HashMap```, except that it is not {Key, Value} pair. HashSet is defined for single elements. Size of a HashSet is not the same as the number of elements. 

Insert element => ```O(1)``` <br>
Remove element => ```O(1)``` <br>
Access element => ```O(1)``` <br>
