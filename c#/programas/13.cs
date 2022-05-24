using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("=== For ===");
    
        double valorInvestido = 1000;

        for(int contadorMes = 1; contadorMes <= 12; contadorMes++)
        {
            valorInvestido *= 1.0036; // = (valorInvestido = valorInvestido + valorInvestido * 0.0036;).
            Console.WriteLine("Após " + contadorMes + " meses, você terá R$" + valorInvestido);
        }


        Console.WriteLine("A execução terminou, tecle enter para finalizar...");
        Console.ReadLine();
    }
}