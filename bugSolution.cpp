std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
 vec.push_back(i); 
}
for (int i = 0; i < 10; ++i) {
  vec[i] = i * 2; 
}
// Or use iterators for safer access 
for (auto it = vec.begin(); it != vec.end(); ++it) {
  *it *= 2; 
}
//This solution uses the vector's indexing operator [] or iterators to modify the values safely. It avoids direct manipulation through a raw pointer.