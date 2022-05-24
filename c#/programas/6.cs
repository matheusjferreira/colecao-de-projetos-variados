using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("=== Atribuições de Variáveis ===");

        int idade = 32;
        int idadeGustavo = idade;

        idade = 20;

        Console.WriteLine(idade);
        Console.WriteLine(idadeGustavo);

        Console.WriteLine("A execução terminou, tecle enter para finalizar...");

        Console.ReadLine();
    }
}