using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
namespace RandomPractice
{
    class PairListSort
    {
        public static void Main(string[] args)
        {
            int n = 6, m = 2;
            int[] arr = { 4, 4, 4, 4, 4, 1, 1, 2, 2, 2, 3, 3 };
            var map = new Dictionary<int, int>();
            var map2 = new Dictionary<int, int>();
            var list = new List<KeyValuePair<int, int>>();
            for (int i = 0; i < arr.Length; i++)
            {
                if (!map.ContainsKey(arr[i])) map[arr[i]] = 1;
                else map[arr[i]]++;
            }
            foreach (var item in map)
            {
                list.Add(new KeyValuePair<int, int>(item.Key, item.Value));
            }
            list.Sort(compare);
            foreach (var item in list)
            {
                map2.Add(item.Key, item.Value);
            }
            int cnt = 0, ans = 0;
            foreach (var item in map2)
            {
                if (cnt < m)
                    cnt++;
                else
                    ans += item.Value;
            }
        }
        private static int compare(KeyValuePair<int, int> x, KeyValuePair<int, int> y)
        {
            return y.Value.CompareTo(x.Value);
        }
    }
}
