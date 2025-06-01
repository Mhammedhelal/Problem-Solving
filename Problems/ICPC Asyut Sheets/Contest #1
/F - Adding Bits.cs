namespace ProblemSolvingCS
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            int a = int.Parse(input[0]), b = int.Parse(input[1]);

            int c = a ^ b;
            Console.WriteLine(c);
        }
    }
}