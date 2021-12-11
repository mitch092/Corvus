# Corvus
Corvus is a modern C++ standard library. It is implemented using [test-driven development](https://en.wikipedia.org/wiki/Test-driven_development), which means that the tests are written first.

- Corvus does not depend on anything other than itself. Not even the C++ standard library/STL.
- The project that tests Corvus is called Corax (mentioned in the CMakeLists.txt file).
- Corax depends on Corvus and doctest. Corax also uses the C++ standard library/STL in order to check the correctness of Corvus.

For now, Corvus is a header only library built with CMake. But in the future I would like to change it to use C++20 modules.
Right now, there is no way (that I know of) for CMake to create and expose a C++20 module based library.

#  Design Decisions
- 1 data structure per class per module per file
- 1 algorithm per function per module per file

# Data Structures
- [ ] cor::UniquePointer
- [ ] cor::SharedPointer
- [ ] cor::DynamicArray
- [ ] cor::SinglyLinkedList
- [ ] cor::DoublyLinkedList
- [ ] cor::HashTable
- [ ] cor::UnboundedStack
- [ ] cor::BoundedStack
- [ ] cor::UnboundedQueue
- [ ] cor::BoundedQueue
- [ ] cor::PriorityQueue
- [ ] cor::BinaryTree
- [ ] cor::BTree
- [ ] cor::BPlusTree
- [ ] cor::Trie
- [ ] cor::AdjacencyList
- [ ] cor::AdjacencyMatrix

# Algorithms
- [ ] cor::Quicksort
- [ ] cor::BinarySearch
- [ ] cor::LinearSearch
- [ ] cor::MergeSort
- [ ] cor::HeapSort
- [ ] cor::DepthFirstSearch
- [ ] cor::BreadthFirstSearch
- [ ] cor::DijkstrasAlgorithm
- [ ] cor::AStar
- [ ] cor::KruskalsAlgorithm
