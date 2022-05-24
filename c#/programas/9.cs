using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("=== Escopo e Imputs ===");

        int idadeJoao = 0;
        Console.WriteLine("Qual a idade de João?");
        int recebeIdade = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Está acompanhado?");
        string recebeAcompanhado = Console.ReadLine();

        bool acompanhado;
        if (recebeAcompanhado == "sim" || recebeAcompanhado == "s" || recebeAcompanhado == "SIM" || recebeAcompanhado == "S")
        {
            acompanhado = true;
        }
        else
        {
            acompanhado = false;
        }
        string mensagemAdicional;

        // Se a instrução possui apenas 1 linha em um escopo, não há necessidade de abrir e fechar chaves.
        if (acompanhado == true)
            mensagemAdicional = "João está acompanhado!";
        else
            mensagemAdicional = "João NÃO está acompanhado";

        if (recebeIdade >= 18 || acompanhado == true)
        {
            Console.WriteLine("Pode entrar.");
            Console.WriteLine(mensagemAdicional);
        }
        else
        {
            Console.WriteLine("Não pode entrar");
            Console.WriteLine(mensagemAdicional);
        }
        Console.WriteLine("A execução terminou, tecle enter para finalizar...");
        Console.ReadLine();
    }
}