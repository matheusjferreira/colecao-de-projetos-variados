using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

class Programa
{
    static void Main(String[] args)
    {
        Console.WriteLine("=== Exercício 3 (1 - 5, matrix triângular) ===");

        for (int linha = 0; linha < 5; linha++)
        {
            for (int coluna = 0; coluna < 5; coluna++)
            {
                if (coluna > linha)
                {
                    break;
                }
                Console.Write(coluna + 1);
            }
            Console.WriteLine();
        }
    }
}