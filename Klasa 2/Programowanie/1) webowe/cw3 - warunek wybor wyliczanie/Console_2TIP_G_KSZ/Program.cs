using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Console_2TIP_G_KSZ
{
    class Program
    {
        static void Main(string[] args)
        {
            Cw3 cwiczenie3 = new Cw3();
            Cw3 lata = new Cw3();
            Cw3 dzien = new Cw3();
            cwiczenie3.Warunkowe1();
            lata.Warunkowe2();
            dzien.Wybor();
            dzien.Wylicz();
            Console.ReadKey();
        }
    }

    class Cw3
    {
        public void Warunkowe1()
        {
            Console.Write("Czy lubisz szkole? (t/n)");
            try
            {
                char odpowiedz = Convert.ToChar(Console.ReadLine());
                if (odpowiedz == 't')
                {
                    Console.WriteLine("Czy czasem nie kłamiesz");
                }
                else
                {
                    Console.WriteLine("Jeszcze nie polubisz....");
                }
            }
            catch (FormatException ex)
            {
                Console.WriteLine(ex.Message);
            }
        }

        public void Warunkowe2()
        {
            Console.Write("Ile masz lat?");
            try
            {
                int wiek = Convert.ToInt32(Console.ReadLine());
                if (wiek < 18)
                {
                    Console.WriteLine("Zapraszamy ponownie jak skończysz 18 lat");
                }
                else
                {
                    Console.WriteLine("Zapraszamy :) ");
                }
            }
            catch (FormatException ex)
            {
                Console.WriteLine(ex.Message);
            }
        }

        public void Wybor()
        {
            Console.Write("Który dzień tygodnia lubisz: (1-7)?: ");
            ushort dzien = Convert.ToUInt16(Console.ReadLine());
            switch (dzien)
            {
                case 1:
                    Console.WriteLine("Czyli Poniedziałek");
                    break;
                case 2:
                    Console.WriteLine("Czyli Wtorek");
                    break;
                case 3:
                    Console.WriteLine("Czyli Środa");
                    break;
                case 4:
                    Console.WriteLine("Czyli Czwartek");
                    break;
                case 5:
                    Console.WriteLine("Czyli Piatek");
                    break;
                case 6:
                    Console.WriteLine("Czyli Sobota");
                    break;
                case 7:
                    Console.WriteLine("Czyli Niedziela");
                    break;

            }
        }

        public void Wylicz()
        {
            ushort dzien;
            do
            {


                Console.Write("Który dzien tygodnia lubisz: (1-7): ");
                dzien = Convert.ToUInt16(Console.ReadLine()[0]);
                DzienTygodnia dd = (DzienTygodnia)((dzien >= 1) && (dzien <= 7) ? dzien : 8);
                Console.WriteLine($"wartość: {dd} odpowiednik {(int)dd}");
                switch (dd)
                {
                    case DzienTygodnia.Poniedzialek: Console.WriteLine($"Wybrano {dd} fajny jest"); break;
                    case DzienTygodnia.Wtorek: Console.WriteLine($"Wybrano {dd} jeszcze fajniejszy jest"); break;
                    case DzienTygodnia.Sroda: Console.WriteLine($"Wybrano {dd} srodek tygodnia"); break;
                    case DzienTygodnia.Czwratek: Console.WriteLine($"Wybrano {dd} po polmetku"); break;
                    case DzienTygodnia.Piatek: Console.WriteLine($"Wybrano {dd} fajny prwie weekend"); break;
                    case DzienTygodnia.Sobota: Console.WriteLine($"Wybrano {dd} super"); break;
                    case DzienTygodnia.Niedziela: Console.WriteLine($"Wybrano {dd} i to by bylo na tyle"); break;
                    default: Console.WriteLine($"Wybrano bledny dzien"); break;
                }
            } while (dzien != 9);
        }
    }
    enum DzienTygodnia
    { 
        Poniedzialek = 1,
        Wtorek = 2,
        Sroda = 3,
        Czwratek = 4,
        Piatek = 5,
        Sobota = 6,
        Niedziela = 7,
    }
}

