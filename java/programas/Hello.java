/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author walker
 */
public class Hello {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String st= "Hello Word ";
        
        System.out.println(st.toUpperCase());
        
        int i=10;
        
        System.out.println(st + i + i);
        
        boolean b= true;
        
        double pi= 3.14160000001;
        
        
        System.out.printf("%s %5d %f boolean value: %b = %s\n", st, i, pi, b, (b?"yes":"no"));
        
        String st1= "ABC";
                
        String st2= "DEF";
        
        if(st1.compareTo(st2) > 0)
            System.out.println(st1);
        else System.out.println(st2);
        
        if(st1.equals(st2))
            System.out.println("equals");
        else System.out.println("diferents");
        
        System.out.println(st1.length());
        
        /**
        * int  i=10; [= 4 bytes]
        * long int  i=10; [= 8 bytes]
        * short int  i=10; [= 2 bytes] 
        */
        
        char j= 'c';
        char k= 10;
    }
    
}
