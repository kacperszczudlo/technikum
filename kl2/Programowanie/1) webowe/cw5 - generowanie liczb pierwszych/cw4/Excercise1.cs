using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cw4
{
    class Excercise1
    {
      
        private int[] numbers;
        private int limit;
        public Excercise1(int limit)
        {
            this.limit = limit;
            numbers = new int[limit];
            FillNumbers();
        }

        private void FillNumbers()
        {
            int licznik = 0;
            int number = 2;
            while (licznik < limit) { 
            if (isPrimeNumber(number))
            {
                numbers[licznik] = number;
                licznik++;
            }
                number++;
            }
            
        }
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            for (var i = 0; i < numbers.Length; i++){
                sb.Append(numbers[i] + " ");
            }
            return sb.ToString();
        }
        static void Ex1()
        {
            Console.WriteLine("Podaj ile chcesz liczb pierwszych");
            int limit = Convert.ToInt32(Console.ReadLine());
            Excercise1 Ex1 = new Excercise1(limit);
            Console.WriteLine(Ex1);

        }
            private bool isPrimeNumber(int number)
            {
                if (number <= 1) return false;
                for(int i=2; i < number; i++)
                {
                    if (number % i == 0) return false;
                }
                return true;
            }

        }
    }


