using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

class Programa
{
    static void Main(String[] args)
    {
        Console.WriteLine("=== Exercício 5 (múltiplos de 3 até 100) ===");

        for (int contador = 0; contador <= 100; contador++)
        {
            if ((contador % 3) == 0)
                Console.WriteLine(contador);
        }

        Console.WriteLine("=== Segunda forma ====");

        for (int i = 0; i < 100; i += 3)
        {
            Console.WriteLine(i);
        }

        Console.ReadLine();
    }
}