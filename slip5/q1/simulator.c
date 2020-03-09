case 6: // MOVEM
   mem[op2]=reg[op1];
   break;
  case 7: // COMP
   if(reg[op1] < mem[op2])
    cond[0]=1;
   if(reg[op1] <= mem[op2])
    cond[1]=1;
   if(reg[op1] == mem[op2])
    cond[2]=1;
   if(reg[op1] > mem[op2])
    cond[3]=1;
   if(reg[op1] >= mem[op2])
    cond[4]=1;
   break;
  case 8: // BC
   if(cond[op1]==1)
    pc = op2-1;
   
   for(i=0;i<5;i++)
    cond[i]=0;
   break;
  case 9: // READ
   scanf("%d",&mem[op2]);
   break;
  case 10:// PRINT
   printf("%d\n",mem[op2]);
  }
  pc++;
 }
}

int main()
{
 int ch;

 while(1)
 {
  printf("1.Load\n2.Print\n3.Run\n4.Exit\n");
  printf("Enter your choice (1-4):");
  scanf("%d",&ch);

  switch(ch)
  {
  case 1:
   load();
   break;
  case 2:
   print();
   break;
  case 3:
   run();
   break;
  case 4:
   exit(0);
  }
 }

 return 0;
} 
