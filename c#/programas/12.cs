using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("=== While ===");

        double valorInvestido = 1000;
        int contadorMes = 1;

        while (contadorMes <= 12)
        {
            //0.36% = 0.0036
            valorInvestido = valorInvestido + valorInvestido * 0.0036;
            Console.WriteLine("Após " + contadorMes + " meses, você terá R$" + valorInvestido);

            // contadorMes = contadorMes + 1;
            //contadorMes += 1;
            contadorMes++;

        }

        Console.WriteLine("A execução terminou, tecle enter para finalizar...");
        Console.ReadLine();
    }
}