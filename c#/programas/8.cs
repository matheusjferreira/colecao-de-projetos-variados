using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("=== Condicionais 2 ===");

        int idadeJoao = 18;
        //int quantidadePessoas = 2;
        //bool acompanhado = quantidadePessoas >= 2;
        bool acompanhado = false;

        /* || = ou, && = e.
        if (idadeJoao >= 18 || acompanhado == true)
        Se idade de João for maior ou igual a 18 "e" estiver acompanhado faça {}.*/
        if (idadeJoao >= 18 && acompanhado == true)
        {
            Console.WriteLine("Pode entrar.");
        }
        else
        {
            Console.WriteLine("Não pode entrar");
        }

        int idade = 68;
        bool idoso = idade >= 65;

        Console.WriteLine("Valor da variável idoso (boolean) = " + idoso);

        /*Os operadores lógicos devem ter no lado esquerdo e direito uma expressão booleana.
        Exemplo:

        if (idade > 18 && idade < 65)
        {
            //Código.
        }

        Repare que temos duas expressões booleanas, na esquerda e na direita do operador lógico &&.*/

                Console.WriteLine("A execução terminou, tecle enter para finalizar...");
        Console.ReadLine();
    }
}