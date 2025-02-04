std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
 vec.push_back(i); 
}
int *ptr = &vec[0]; 
for (int i = 0; i < 10; ++i) {
  ptr[i] = i * 2; 
}
//Error: modifying a vector through a raw pointer after pushing elements may lead to undefined behavior because the vector may reallocate its internal array.