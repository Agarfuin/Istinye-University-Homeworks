// Same as KeyedItem555.h// Define KeyType before compilation// *********************************************************// Header file KeyedItem.h for the ADT binary search tree.// *********************************************************typedef int KeyType;class KeyedItem{public:   KeyedItem() {};   KeyedItem(const KeyType& keyValue)            : searchKey(keyValue) {}   KeyType getKey() const   {      return searchKey;   } // end getKeyprivate:   KeyType searchKey;   //... and other data}; // end class
