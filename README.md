# DSA final exam
## ***Về bài thi***
- Làm trực tiếp trên đề  
- Làm bằng tiếng Anh (có thể chú thích bằng tiếng việt)  
- Đề gồm 5 đến 6 câu, mỗi câu có thể có 3 đến 4 câu nhỏ  
- Thời gian làm từ 90 đến 110 phút  
- Có thể sử dụng **vector**, **priority-queue** nếu đề không liên quan đến tính chất của chúng  
- Ví dụ như đề yếu cầu sử dụng *queue* thì **không được** sử dụng *priority-queue*, tương tự *pointer* cho *vector*  
## ***Nội dung ôn tập***
## I. Sort (so sánh)
### 1. Selection Sort
### 2. Insertion Sort
### 3. Quick Sort
### 4. Merge Sort
### 5. Radix Sort
### 6. Heap Sort
## II. Search (tìm kiếm)
### 1. Linear search
### 2. Binary search
##  III. Hashing (hàm băm)
> Lưu ý: Có thể liên quan đến chuỗi **(djb2hash)**  
### 1. Chaining approach
### 2. Linear
### 3. Quadratic
### 4. Double hasing
## IV. Tree
### 1. Binary Tree
- Cây nhị phân cơ bản hay tổng quát (**Standard** Binary Tree): Mỗi nút trong cây có tối đa hai con - con trái và con phải
  
- Cây nhị phân hoàn chỉnh (**Complete** Binary Tree): Là một cây nhị phân trong đó tất cả các tầng, trừ tầng cuối cùng, đều được đầy đủ. Tầng cuối cùng được điền từ trái sang phải
  
- Cây nhị phân tìm kiếm (**Binary Search** Tree - BST): Là một cây nhị phân có sự sắp xếp ( Left value < Node value < Right value)
  
- Cây nhị phân cân bằng (**Balanced** Binary Tree): Là một loại cây nhị phân mà chiều cao của cây cân bằng, hay chiều cao của cây con trái và cây con phải của mỗi nút chênh lệch không quá 1
  
- Cây nhị phân đầy đủ (**Full** Binary Tree): Là một cây nhị phân mà mỗi nút có đúng 0 hoặc 2 con
  
- Cây nhị phân hoàn hảo (**Perfect Binary** Tree): Là một cây nhị phân đầy đủ được điền từ trái sang phải với chiều cao của cây bằng log2(số node)  
### 2. AVL tree 
### 3. B-tree
> Lưu ý: Nếu đề yêu cầu về cây 2/3/4-tree (K-way tree) thì đều làm theo B-tree 3 nhánh
## V. Graph
### 1. Formal Definition
### 2. DFS
> depth-first search  
### 3. BFS
> breadth-first search  
### 4. Minium spaning tree (cây khung nhỏ nhất)
> Tìm **1** hoặc **tất cả** cây khung nhỏ nhất  
#### Prim’s algorithm:
1. Bắt đầu từ một đỉnh bất kỳ, chọn cạnh có trọng số nhỏ nhất kết nối với các đỉnh đã được thêm vào cây khung.  
2. Tiếp tục thêm cạnh có trọng số nhỏ nhất kết nối với các đỉnh trong cây.  
3. Lặp lại quá trình cho đến khi tất cả các đỉnh đều đã được thêm vào cây khung.  
#### Kruskal’s algorithm:
1. Sắp xếp tất cả các cạnh theo thứ tự tăng dần của trọng số.  
2. Bắt đầu từ cạnh có trọng số nhỏ nhất, thêm cạnh đó vào cây khung nếu nó không tạo thành chu trình với các cạnh đã được thêm vào cây.  
3. Lặp lại việc thêm cạnh cho đến khi cây khung có đủ n-1 cạnh.
### 5. Shortest Path (đường đi ngắn nhất)
> dijkstra's algorithm
