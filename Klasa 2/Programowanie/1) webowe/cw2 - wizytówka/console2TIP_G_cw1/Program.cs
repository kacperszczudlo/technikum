using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace console2TIP_G_cw1
{
    class Program
    {
        static void Main(string[] args)
        {
            Show();
            Console.ReadKey();
        }

        static void Show()
        {           
            Console.WriteLine("Hello World");
            MyNEwClass myNew = new MyNEwClass();
            myNew.Wizytówka();
        }
        
    }

    class MyNEwClass 
    {
        public void Wizytówka()
        {
            Console.WriteLine("***********************");
            Console.WriteLine("*Kacper Szczudło      *");
            Console.WriteLine("*2TIP/G               *");
            Console.WriteLine("*rok szkolny 2020/2021*");
            Console.WriteLine("***********************");
        }
    }

}
