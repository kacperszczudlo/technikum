using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cw4
{
    class Excercise2
    {
        private int limit;
        private string[] dane;
        public Excercise2(int limit)
        {
            this.limit = limit;
            dane = new string[limit];
        }

        private void fillData()
        {
            for(int i = 0;i < dane.Length; i++)
            {
                Console.Write($"Podaj tekst ({i + 1} z {dane.Length}):");
                string text = Console.ReadLine();
                dane[1] = text;
            }
        }
        public override string ToString()
        {
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < dane.Length; i++)
            {
                sb.Append($"Tekst nr: {i}: {dane[i]}").Append(Environment.NewLine);
            }
            return sb.ToString();
        }
    }
}
