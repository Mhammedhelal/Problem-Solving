namespace ProblemSolvingCS
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            long a = long.Parse(input[0]), b = long.Parse(input[1]), c = long.Parse(input[2]), d = long.Parse(input[3]);

            long result1 = a + b - c;
            long result2 = a + b * c;
            long result3 = a - b + c;
            long result4 = a - b * c;
            long result5 = a * b + c;
            long result6 = a * b - c;

            if (result1 == d || result2 == d || result3 == d || result4 == d || result5 == d || result6 == d)
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");
        }
    }
}