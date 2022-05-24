using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

class Programa
{
    static void Main(String[] args)
    {
        Console.WriteLine("=== Exercício 2 (ímpares 1 a 10) ===");

        for(int contador = 1; contador <= 10; contador++)
        {
            Console.WriteLine(contador);
            contador++;
        }
    }
}