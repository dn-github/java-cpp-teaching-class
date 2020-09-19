# Data Structure

Following are the most popular data structures we should know.

## Array
Insert element at end => ```O(1)```
Insert element at an index which is not end => ```O(N)```
Access element at an Index => ```O(1)```
Delete element at end => ```O(1)```
Delete element at an index which is not end => ```O(N)```
Search an element => ```O(N)```

### C++ Implementation
```[]```, ```Array``` and ```Vector```

#### Available functions
```size```
```empty```
```push_back```
```insert``` (by iterator)
```[]```
```pop_back```
```erase```
```size```
```begin```
```end```
```clear```
 
### Java Implementation
```[]```, ```ArrayList```


## Linked List

### Single Linked List
Insert element at beginning => ```O(1)```
Insert element at an index which is not beginning => ```O(N)```
Insert element after a given element => ```O(1)```
Access element at an index => ```O(N)```
Access element at a reference => ```O(1)```
Delete element at an index => ```O(N)```
Delete a given reference => ```O(N)```
Search an element => ```O(N)```

### Double Linked List
Insert element at beginning => ```O(1)```
Insert element at an index which is not beginning => ```O(N)```
Insert element after a given element => ```O(1)```
Access element at an index => ```O(N)```
Access element at a reference => ```O(1)```
Delete element at an index => ```O(N)```
Delete a given reference => ```O(1)```
Search an element => ```O(N)```

#### C++ Implementation
```list```

##### Available functions
```size```
```empty```
```push_back```
```push_front```
```pop_back```
```pop_front```
```clear```
```insert``` (by iterator)
```erase``` (by iterator)
```remove``` (by value)
```begin```
```clear```

## Stack
Stack is a data structure with ```First in Last out``` feature. Insertion, removal and access can only be done at/from the top.

Insert element => ```O(1)```
Remove element => ```O(1)```
Access element => ```O(1)```

## Queue
Queue is a data structure with ```First in First out``` feature. Insertion, removal and access can only be done at/from the front.

Insert element => ```O(1)```
Remove element => ```O(1)```
Access element => ```O(1)```

## Hash Map
Hash Map is also called ```dictionary``` data structure. Each element in a HashMap is a {Key, Value} pair. Each key is indexed inside the data structure. Locating a key is two steps process. HashMap first calculates the index of the key using a hash function. Then it access the element from that Index. Size of a HashMap is not the same as the number of elements.

Insert element => ```O(1)```
Remove element => ```O(1)```
Access element => ```O(1)```

## Hash Set
Hash Set is also called ```dictionary``` data structure. It is exactly similar to ```HashMap```, except that it is not {Key, Value} pair. HashSet is defined for single elements. Size of a HashSet is not the same as the number of elements.

Insert element => ```O(1)```
Remove element => ```O(1)```
Access element => ```O(1)```
