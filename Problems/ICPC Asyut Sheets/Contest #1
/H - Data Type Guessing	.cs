namespace ProblemSolvingCS
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            decimal n = decimal.Parse(input[0]), k = decimal.Parse(input[1]), a = decimal.Parse(input[2]);

            decimal res = (n * k) / a;

            string ans = res != (long)res ? "double" : res <= 2147483647 && res >= -2147483648 ? "int" : "long long";
            Console.WriteLine(ans);
        }
    }
}