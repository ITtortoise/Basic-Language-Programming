using System;

class BinSearch
{
	static int binarySearch(int[] arr, int x)
	{
		int l = 0, r = arr.Length - 1;
		while (l <= r)
		{
			int m = l + (r - l) / 2;

			// Check if x is present at mid 
			if (arr[m] == x)
				return m;

			// If x greater, ignore left half 
			if (arr[m] < x)
				l = m + 1;

			// If x is smaller, ignore right half 
			else
				r = m - 1;
		}

		// if we reach here, then element was 
		// not present 
		return -1;
	}
	public static void Main()
	{
		int[] arr = { 2, 3, 4, 10, 40 };
		int n = arr.Length;
		int x = 10;
		int result = binarySearch(arr, x);
		if (result == -1)
			Console.WriteLine("Element not present");
		else
			Console.WriteLine("Element found at "
							+ "index " + result);
	}
}
