namespace ProblemSolvingCS
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            int a = int.Parse(input[0]), b = int.Parse(input[1]);

            
            if (a==0&b==0||Math.Abs(a-b)>1)
                Console.WriteLine("NO");
            else
                Console.WriteLine("YES");
        }
    }
}