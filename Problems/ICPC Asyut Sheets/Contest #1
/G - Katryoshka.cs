namespace ProblemSolvingCS
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            int n = int.Parse(input[0]), m = int.Parse(input[1]), k = int.Parse(input[2]);

            if (k == 0 || n == 0)
                Console.WriteLine(0);
            else if ((m >= n && m >= k) || (m >= k && m < n) || (m < k && m >= n))
            {
                Console.WriteLine(Math.Min(n, k));
            }
            else if (m < k && m < n)
            {
                int res = m;
                n -= m;
                k -= m;
                res += Math.Min(n / 2, k);
                Console.WriteLine(res);
            }
        }
    }
}