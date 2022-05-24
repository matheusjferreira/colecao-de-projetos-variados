using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("==== Criando Variéveis ====");

        int idade;
        idade = 26;

        Console.WriteLine(idade);

        Console.WriteLine("Minha idade é: " + idade);

        idade = 10;

        Console.WriteLine("Minha idade agora é: " + idade);

        idade = 10 + 5;

        Console.WriteLine("Minha idade agora é: " + idade);

        idade = 10 + 5 * 2;

        Console.WriteLine("Minha idade agora é: " + idade);

        idade = (10 + 5) * 2;

        Console.WriteLine("Minha idade agora e: " + idade + "!!!");

        Console.ReadLine();
    }
}
