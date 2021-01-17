using System;

namespace Practice
{
    class twoDarrayTraverse
    {
        static void Main(string[] args)
        {
            var arr = new int[2,3];
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    arr[i, j] = int.Parse(Console.ReadLine());
                }
            }

            int[] dx = { 1, 0, 0, -1 };
            int[] dy = { 0, -1, 1, 0 };
            for(int  i= 0; i < 2; i++)
            {
                
                for (int j = 0; j < 3; j++)
                {
                    int sum = 0;
                    for (int k = 0; k < 4; k++)
                    {
                       var nx = i + dx[k];
                       var my = j + dy[k];
                        if (nx >= 0 && nx < 2 && my >= 0 && my < 3)
                        {
                            sum = sum + arr[nx, my];
                        }

                    }
                    Console.WriteLine($"{i},{j}:{sum}");
                }
               
            }
        }
    }
}
