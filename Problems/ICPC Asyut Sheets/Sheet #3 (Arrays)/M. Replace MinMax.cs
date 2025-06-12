using System;

namespace SourceCode
{
    class Program
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());
            int[] arr = new int[n];
            string[] input = Console.ReadLine().Split();
            for (int i = 0; i < arr.Length; i++)
                arr[i] = int.Parse(input[i]);

            swap(ref arr[MinimumIndex(arr)], ref arr[MaximumIndex(arr)]);

            foreach (int i in arr)
                Console.Write(i + " ");

        }
        static int MinimumIndex(int[] arr)
        {
            int min = arr[0];
            int index = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] < min)
                {
                    min = arr[i];
                    index = i;
                }
            }
            return index;
        }
        static int MaximumIndex(int[]arr)
        {
            int max = arr[0];
            int index = 0;
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                    index = i;
                }
            }
            return index;
        }
        static void swap(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
    }
}
