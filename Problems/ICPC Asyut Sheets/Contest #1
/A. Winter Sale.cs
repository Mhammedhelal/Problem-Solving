namespace ProblemSolvingCS
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            float x = float.Parse(input[0]), p = int.Parse(input[1]);

            float res = p * 100 / (100 - x);
            Console.WriteLine($"{res:F2}");
        }
    }
}