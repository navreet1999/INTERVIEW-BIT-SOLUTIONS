/*
Reverse bits of an 32 bit unsigned integer

Example 1:

x = 0,

          00000000000000000000000000000000  
=>        00000000000000000000000000000000
return 0

Example 2:

x = 3,

          00000000000000000000000000000011 
=>        11000000000000000000000000000000
return 3221225472/*

unsigned int reverse(unsigned int A) 

{
    int n=0,i;

    for(i=0;i<32;i++)

    {

      n = n*2+A%2;

      //printf("%d ",n);

        A = A>>1;

    }
    

10return n;

}
