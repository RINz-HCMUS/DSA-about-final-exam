# DSA-final-test
> Làm trực tiếp trên đề  
> Làm bằng tiếng Anh (có thể chú thích bằng tiếng việt)  
> Đề gồm 5 đến 6 câu, mỗi câu có thể có 3 đến 4 câu nhỏ  
> Thời gian làm từ 90 đến 110 phút  
> Có thể sử dụng **vector**, **priority-queue** nếu đề không liên quan đến tính chất của chúng
> (ví dụ như đề yếu cầu sử dụng *queue* thì **không được** sử dụng *priority-queue*, tương tự *pointer* cho *vector*)  
#**Nội dung ôn tập**
## * Sort (so sánh)
### Selection Sort
### Insertion Sort
### Quick Sort
### Merge Sort
### Radix Sort
### Heap Sort
## * Search (tìm kiếm)
### Linear search
### Binary search
##  * Hashing (hàm băm)
### Chaining approach
### Linear
### Quadratic
### Double hasing
> Lưu ý: Có thể liên quan đến chuỗi **(djb2hash)**
## * Tree
### Binary Tree
- Cây nhị phân cơ bản hay tổng quát (Standard Binary Tree): Mỗi nút trong cây có tối đa hai con - con trái và con phải  
- Cây nhị phân hoàn chỉnh (Complete Binary Tree): Là một cây nhị phân trong đó tất cả các tầng, trừ tầng cuối cùng, đều được đầy đủ. Tầng cuối cùng được điền từ trái sang phải  
- Cây nhị phân tìm kiếm (Binary Search Tree - BST): Là một cây nhị phân có sự sắp xếp ( Left value < Node value < Right value)  
- Cây nhị phân cân bằng (Balanced Binary Tree): Là một loại cây nhị phân mà chiều cao của cây cân bằng, hay chiều cao của cây con trái và cây con phải của mỗi nút chênh lệch không quá 1  
- Cây nhị phân đầy đủ (Full Binary Tree): Là một cây nhị phân mà mỗi nút có đúng 0 hoặc 2 con  
- Cây nhị phân hoàn hảo (Perfect Binary Tree): Là một cây nhị phân đầy đủ được điền từ trái sang phải với chiều cao của cây bằng log2(số node)  
### AVL tree 
### B-tree
> Lưu ý: Nếu đề yêu cầu về cây 2/3/4-tree (K-way tree) thì đều làm theo B-tree 3 nhánh
## * Graph
### Formal Definition
- A graph, **G = (V, E)**, consists of 2 sets:  
  - A finite non empty set of vertices(V), and a finite set (E) of unordered pairs of distinct vertices called edges.  
  - V(G) and E(G) represent the sets of vertices and edges of G, respectively.  
- **(Đỉnh)** A **node** or vertex or points: the fundamental unit out of which graphs are formed.  
- **(Cạnh)** A **Edge** or Arcsor or Links: Gives the relationship between the two vertices.  
- **(Hai đỉnh có cạnh nối trực tiếp)** Two vertices of a graph are **adjacent** they are joined by an edge.  
- **(Đồ thị con)** A subgraphconsists of a subset of a graph’s vertices and a subset of its edges.  
- **(Đường đi)** A pathbetween two vertices is a sequence of edges that begins at one vertex and ends at another vertex.
- **(Đường đi không có đỉnh nào lặp lại)** A simple path is a path does not pass through the same vertex more than once.  
- **(Chu trình)** A cycleis a path that begins and ends at the same vertex; a simple cycle is a cycle that does not pass through other vertices more than once.  
- **(Đồ thị có đường đi cho mọi cặp đỉnh)** A **graph is connected** if each pair of distinct vertices has a path between them.  
- **(ngược lại với đồ thị trên)** a **disconnected graph** does not necessarily.  
- **(Đồ thị hoàn chỉnh)** In a **complete graph**, each pair of distinct vertices has an edge between them.  
  – Clearly, a **complete graph** is *also connected*, but the *converse is not true*.  
- **(Đa đồ thị)** a **multigraph** does allow multiple edges.  
  – Thus, ***a multigraph is not a graph***. A graph’s edges cannot begin and end at the same vertex.  
- **(Đỉnh có đường đi đến chính nó) A graph’s edges begin and end at the same vertex is called a **self edge** or **loop**.  
- **(Gán nhãn cho cạnh)** You can **label** the edges of a graph.  
- **(Đồ thị có trọng số)** When these labels represent *numeric values*, the graph is called a **weighted graph**.  
- **(Đồ thị vô hướng)** In **undirected graphs**, the edges do not indicate a direction. That is, you can travel in either direction along the edges between the vertices of an undirected graph.  
- **(Đồ thị có hướng)** In contrast, each edge in a **directed graph**, or **digraph**, has a direction and is called a directed edge.
  > The definition of **adjacent verticesis** not quite same in both graph type.
  > In **digraph** If there is a directed edge from vertex x to vertex y, then y is adjacent to x.
  > (Alternatively, y is a successorof x, and x is a predecessorof y.) It does not necessarily follow that x is adjacent to y.
- **Adjacency Matrix** (Ma trận kề): Một ma trận được sử dụng để biểu diễn một đồ thị, trong đó hàng và cột tương ứng với các đỉnh, và giá trị trong ô (i, j) chỉ ra sự hiện diện hoặc vắn tắt của một cạnh giữa đỉnh i và j.  
- **Adjacency List** (danh sách kề): Một cấu trúc dữ liệu được sử dụng để biểu diễn một đồ thị, trong đó mỗi đỉnh được liên kết với một danh sách các đỉnh kề.
### DFS
> depth-first search
### BFS
> breadth-first search
### Minium spaning tree (cây khung nhỏ nhất)
> Tìm **1** hoặc **tất cả** cây khung nhỏ nhất  
#### Prim’s algorithm
1. Bắt đầu từ một đỉnh bất kỳ, chọn cạnh có trọng số nhỏ nhất kết nối với các đỉnh đã được thêm vào cây khung.  
2. Tiếp tục thêm cạnh có trọng số nhỏ nhất kết nối với các đỉnh trong cây.  
3. Lặp lại quá trình cho đến khi tất cả các đỉnh đều đã được thêm vào cây khung.  
#### Kruskal’s algorithm:
1. Sắp xếp tất cả các cạnh theo thứ tự tăng dần của trọng số.  
2. Bắt đầu từ cạnh có trọng số nhỏ nhất, thêm cạnh đó vào cây khung nếu nó không tạo thành chu trình với các cạnh đã được thêm vào cây.  
3. Lặp lại việc thêm cạnh cho đến khi cây khung có đủ n-1 cạnh.
### Shortest Path (đường đi ngắn nhất)
> dijkstra's algorithm
