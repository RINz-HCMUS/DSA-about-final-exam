# Hasing
  ## 0. djb2hash
  > Convert "string" to "int"
  ## 1. Chaining Approach
  > Dùng ***linked list***  
  > Hash: ***key % size***  
  > Nếu trùng thì thêm vào đuôi linked list

  ## 2. Linear Probing
  > Hash: ***(key + i) % size***  
  > Với 0 <= i <= size, i++

  ## 3. Quadratic Probing
  > Hash: ***(key + i * i) % size***  
  > Với i = 0, i++

  ## 4. Double Hasing
  > Hash: ***(key + i * Hash2(key)) & size***  
  > Với i = 0, i++
  > Hash2: *** key % another*** 
