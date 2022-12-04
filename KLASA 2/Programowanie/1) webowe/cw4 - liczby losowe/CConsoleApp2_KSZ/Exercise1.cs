using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CConsoleApp2_KSZ
{
    class Exercise1
    {
        public void GetLimit()
        {
            Console.Write("Podaj gorny zakres liczb losowych: ");
            int up = Convert.ToInt32(Console.ReadLine());
            up = up < 0 ? -up : up;
            int losowa;
            Random rnd = new Random();
            for (int i = 0;i < up; i++)
            {
                losowa = rnd.Next(up);
                Console.Write(losowa + " ");
            }
        }
    }
}
