import java.io.*;   

//create a Java class called PrimeNumbersPrinter
public class PrimeNumbersPrinter  
{   
	//needed to execute from terminal
    public static void main(String[] args)   
    {   
    	//the thread returns the integer that its working wit
       PrimeNumber JavaThread = new PrimeNumber(Integer.parseInt(args[0]));   
        
       //starts the thread     
       	JavaThread.start();   
    }   
}   


class PrimeNumber extends Thread   
{   
    private int num;   
      
    public PrimeNumber(int n)   
    {   
        num = n;   
    }   
      
    public void run()   
    {      
        //if the number is below zero, it will give out an error 
        if( num < 0)   
        {   
            System.err.println("Number isn't greater than zero, try again.");   
            return;   
        }   
          //if user put a zero or one it will output that it isnt a prime number
        else if(num == 0 || num == 1)   
        {   
            System.out.println("This number isn't a prime number.");   
        }   
          
        //if the number is not a zero or one it will do calculation
        else   
        {   
        	System.out.println("The prime numbers that are less than or equal to the number that you just entered are: ");
        	//counts all prime numbers less than the user's input
            for(int x = 2; x <= num; x++)   
            {   
            	int counter = 0;
                for(int y = 2 ; y <= x; y++)   
                {   
                    if(x % y == 0)   
                       counter++;   
                }   
                    //everytime counter is equal to one, print a space
                	if(counter == 1)   
                    System.out.print(x+" "); 
                	
            }
          System.out.println();
        }   
    }   
}   
