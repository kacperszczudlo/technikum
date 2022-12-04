using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cw4
{
    class Program
    {
        static void Main(string[] args)
        {
            Excercise1 ex1 = new Excercise1(20);
            Console.WriteLine(ex1);
            Ex2();
            Console.ReadKey();

        }
        static void Ex2()
        {
            Console.Write("Podaj ile chcesz wyrazów");
            int limit = Convert.ToInt32(Console.ReadLine());
            Excercise2 ex2 = new Excercise2(limit);
        }
    }
}
