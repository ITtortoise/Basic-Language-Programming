//using System;
//using System.Collections;
//using System.Collections.Generic;

//namespace AlgoUsingCsharp
//{
//    class BFS
//    {
//        static int n, m;
//        static int[,] vis =new int[50,50];
//        static int[,] G = new int[50,50];
//        static int[] dx = { -1, 0, 0, 1 };
//        static int[] dy = { 0, -1, 1, 0 };
//        static void bfs(int a, int b)
//        {
//            var Q = new Queue<KeyValuePair<int, int>>();
//            vis[a,b] = 1;
//            Q.Enqueue(new KeyValuePair<int, int>(a, b));
//            while (Q.Count > 0)
//            {
//                var xy = Q.Dequeue();
//                int x = xy.Key;
//                int y = xy.Value;
//               for (int k = 0; k < 4; k++)
//                {
//                    int nx = x + dx[k];
//                    int my = y = dy[k];
//                    if (nx >= 0 && nx < n && my >= 0 && my < m && G[nx,my] == '*' && vis[nx,my] == 0)
//                    {
//                        Q.Enqueue(new KeyValuePair<int, int>(nx, my));
//                        vis[nx,my] = 1;
//                    }
//                }
//            }
//        }
//        static void Main(string[] args)
//        {

//            string[] line = Console.ReadLine().Split(' ');
//            n = int.Parse(line[0]);
//            m = int.Parse(line[1]);

//            for (int i = 0; i < n; i++)
//            {
//                for (int j = 0; j < m; j++)
//                {
//                    vis[i,j] = 0;
//                }
//            }
          
//            for (int i = 0; i < n; i++)
//            {
//                string s = Console.ReadLine();
//                for (int j = 0; j < m; j++)
//                    G[i, j] = s[j];
//            }
//            for (int i = 0; i < n; i++)
//            {
//                for (int j = 0; j < m; j++)
//                {
//                    if (G[i,j] == '*' && vis[i,j] == 0)
//                        bfs(i, j);
//                }
//            }

//        }
//    }
//}
