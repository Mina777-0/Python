using System;

namespace Myapp
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = {5,2,3,1,9,4};
            int N = arr.Length;

            Merge(arr, N);
            PrintArr(arr, N);
        }

        static void Merge(int[] arr, int S)
        {
            if(S > 1)
            {
                int s1 = S / 2;
                int s2 = S - s1;
                int[] larr = new int[s1];
                int[] rarr = new int[s2];
                int i,j,k;

                for (i = 0; i < s1; i++)
                {
                    larr[i] = arr[i];
                }

                for (j = 0; j < s2; j++)
                {
                    rarr[j] = arr[j+s1];
                }

                Merge(larr, s1);
                Merge(rarr, s2);

                i = j = k = 0;

                while (i < larr.Length && j < rarr.Length)
                {
                    if (larr[i] < rarr[j])
                    {
                        arr[k] = larr[i];
                        i++;
                    }

                    else
                    {
                        arr[k] = rarr[j];
                        j++;
                    }
                    k++;
                }

                while (i < larr.Length)
                {
                    arr[k] = larr[i];
                    i++;
                    k++;
                }

                while (j < rarr.Length)
                {
                    arr[k] = rarr[j];
                    j++;
                    k++;
                }
            }
        }

        static void PrintArr(int[] arr, int S)
        {
            for (int i = 0; i < arr.Length; i++)
            {
                Console.Write(arr[i]+ " ");
            }
        }
    }
}