namespace ProblemSolvingCS
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = Console.Read();
            if(input!='z')
                Console.WriteLine((char)(input+1));
            else 
                Console.WriteLine("a");
        }
    }
}