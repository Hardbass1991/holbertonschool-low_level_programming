This directory contains a couple of search algoritms, along with the answers to the following algoritm complexity questions:
2. What is the time complexity (worst case) of a linear search in an array of size n?
3. What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
4. What is the time complexity (worst case) of a binary search in an array of size n?
5. What is the space complexity (worst case) of a binary search in an array of size n?
6. What is the space complexity of this function / algorithm?
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
