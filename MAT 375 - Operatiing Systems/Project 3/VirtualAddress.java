//Yakov Leonov
//Operating Systems Project 3 
//Section 02
//VirtualAddress.java

public class VirtualAddress
{
	public static final long ADDRESS_SIZE = 32;

	public static void main(String[] args) 

	{
		long address = Integer.parseInt(args[0].trim());
		
		long pgSize = 4;
		long pgBits = 12;
		long pgOffset = 0x00000fff;
		long pgMask = 0xfffff000;

		long pgNmbr = (address & pgMask) >> pgBits;
		long offset = (address & pgOffset);
		
		System.out.println("****************************\n");
		System.out.println("The address " +  address + " contains: ");
		System.out.println("Page number = " + pgNmbr);
		System.out.println("Offset = " + offset);
		System.out.println("\n****************************");
	}
}


