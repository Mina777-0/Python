using System;

namespace Myapp
{
    class Programme
    {
        static void Main(string[] args)
        {
            Console.Write("enter the number: ");
            int number = Convert.ToInt16(Console.ReadLine());

            Console.Write("enter the min number: ");
            int min = Convert.ToInt16(Console.ReadLine());

            Console.Write("enter the max numebr: ");
            int max = Convert.ToInt16(Console.ReadLine());

            Binary(number, min, max);
        }

        static void Binary(int number, int min, int max)
        {
            if (min != max && min < max && number > min && number < max)
            {
                int mean = (min + max) / 2;

                if (mean == number)
                {
                    Console.WriteLine("Found");
                }

                else if (mean < number)
                {
                    Binary(number, mean, max);
                }

                else
                {
                    Binary(number, min, mean);
                }
            }

            else
            {
                Console.WriteLine("There is something wrong");
            }
        }
    }
}