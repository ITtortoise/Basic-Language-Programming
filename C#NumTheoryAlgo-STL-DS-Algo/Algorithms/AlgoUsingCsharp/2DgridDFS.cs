using System;
using System.Collections.Generic;
using System.Text;

namespace AlgoUsingCsharp
{
    class DFS
    {
        static int n, m;
        static int[,] vis = new int[50, 50];
        static int[,] G = new int[50, 50];
        static int[] dx = { -1, 0, 0, 1 };
        static int[] dy = { 0, -1, 1, 0 };
        static void dfs(int x, int y)
        {
            vis[x, y] = 1;

            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx >= 0 && ny >= 0 && nx < n && ny < m && G[nx, ny] == '*' && vis[nx, ny] == 0)
                    dfs(nx, ny);
            }
        }
        static void Main(string[] args)
        {

            string[] line = Console.ReadLine().Split(' ');
            n = int.Parse(line[0]);
            m = int.Parse(line[1]);

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    vis[i, j] = 0;
                }
            }
            for (int i = 0; i < n; i++)
            {
                string s = Console.ReadLine();
                for (int j = 0; j < m; j++)
                    G[i, j] = s[j];
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (G[i, j] == '*' && vis[i, j] == 0)
                        dfs(i, j);
                }
            }
        }


    }
}