namespace ProblemSolvingCS
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int n = int.Parse(input);
            int first = n % 10;
            int second = n / 10;


            if (first == 0 || Math.Max(first, second) % Math.Min(first, second) == 0)
                Console.WriteLine("YES");
            else Console.WriteLine("NO");
        }
    }
}