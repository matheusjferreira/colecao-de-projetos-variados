using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("=== Tamanho das Variáveis ===");

        double salario = 1200.50;

        //O int é um tipo de variável que suporta valores até 32 bits
        int salarioEmInteiro = (int)salario;

        Console.WriteLine(salarioEmInteiro);

        // O long é uma variável de 64 bits
        long idade = 130000000000000;
        Console.WriteLine(idade);

        //O short é um tipo de variável de 16 bits
        short quantidadeProdutos = 15000;
        Console.WriteLine(quantidadeProdutos);

        float altura = 1.80f;
        Console.WriteLine(altura);

        Console.WriteLine("A execução terminou, tecle enter para finalizar...");
        Console.ReadLine();
    }
}