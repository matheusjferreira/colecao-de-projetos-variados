/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

/**
 *
 * @author walker
 */
public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*EXERCÍCIO 1:
        Utilize um laço do tipo for para imprimir todos os múltiplos de 3, entre 1 e 100. 
        */
        
        /* //<---APAGUE
        for(int i=0; i<=100; i++){
            if(i % 3 == 0) {
                System.out.println(i);
            }
        }
        */ //<---APAGUE
        
        //RESOLUÇÃO DO PROFESSOR:
        
        /* //<---APAGUE
        for (int i = 3; i < 100; i += 3 ){
            System.out.println(i);
        }
        */ //<---APAGUE
        
        /*EXERCÍCIO 2:
        Crie uma nova classe, escreva um for que inicie uma variável n (número atual) como 1 e fatorial (resultado total) como 1. Faça seu laço entre 1 a 10 e calcule o resultado!
        */
        
        /* //<---APAGUE
        int fatorial = 1;
        for (int i = 1; i < 11; i++) {
            fatorial *= i;
            System.out.println("Fatorial de " + i + " = " +fatorial);
        }
        */ //<---APAGUE
        
        /*
        O fatorial é sempre o produto de números consecutivos inteiros de 1 até o próprio número. Ex: Fatorial de 4 = 4 x 3 x 2 x 1 = 24 ou fatorial de 4 = 4 x 3! = 24. Com essa última lógica é que essa questão é feita. Pegando sempre o número que a gente quer e multiplicando pelo fatorial do número anterior.
        */
    }
    
}
