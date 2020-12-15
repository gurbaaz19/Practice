package serious;
import java.util.*;
public class TTT
{
        static  int[][]ar=new int[3][3];
 
        public static void main(String[] args)
        {
         TTT obj=new TTT();
         obj.grid();
         int n=1,q=0;
             Scanner sc=new Scanner (System.in);
     System.out.println("Enter the spaces as declared above ");
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
                ar[i][j]=n;
                n++;
        }
     }
     for(int i=1;i<10;i++)
     {
        if(i%2!=0)
        {
                System.out.println("Player 1 :-");
                int a=sc.nextInt();
                for(int l=0;l<3;l++)
             {
                for(int j=0;j<3;j++)
                {
                        if(ar[l][j]==a)
                        ar[l][j]= 11;
                       
                }
             }
     
        }
        else
        {
                System.out.println("Player 2 :-");
                int a=sc.nextInt();
                for(int l=0;l<3;l++)
             {
                for(int j=0;j<3;j++)
                {
                        if(ar[l][j]==a)
                        ar[l][j]= 10;
                       
                }
             }
        }
        if(i>=5)
                 q=obj.calculation(i);
        if(q==90)
                break;
       
     }
     for(int i=0;i<3;i++)
     {
          for(int j=0;j<3;j++)
          {  
                  if(ar[i][j]==11)
                  System.out.print("  X  | ");
                  else if(ar[i][j]==10)
                  System.out.print("  O  | "); 
                  else
                  System.out.print(" ");
          }
          System.out.println("");
          if(i<2)
          System.out.println("----------------");
     }
 
   
        }
        public void grid()
        {
                System.out.println("   1 | 2 | 3");
                System.out.println("---------------");
                System.out.println("   4 | 5 | 6");
                System.out.println("---------------");
                System.out.println("   7 | 8 | 9");
        }
        public int  calculation(int t)
        {
                TTT obj=new TTT();
                int z=0;
                if(ar[1][1]==ar[0][0]&&ar[1][1]==ar[2][2])
                z=  obj.display(ar[1][1],t);
              else if(ar[1][1]==ar[0][1]&&ar[1][1]==ar[2][1])
                z=  obj.display(ar[1][1],t);
              else if(ar[1][1]==ar[0][2]&&ar[1][1]==ar[2][0])
                z=  obj.display(ar[1][1],t);
              else if(ar[1][1]==ar[1][0]&&ar[1][1]==ar[1][2])
                z=  obj.display(ar[1][1],t);
              else if (ar[1][0]==ar[0][0]&&ar[0][0]==ar[2][0])
                z=  obj.display(ar[0][0],t);
              else if (ar[0][1]==ar[0][0]&&ar[0][0]==ar[0][2])
                z=  obj.display(ar[0][0],t);
              else if (ar[1][2]==ar[0][2]&&ar[0][2]==ar[2][2])
                 z= obj.display(ar[1][2],t);
              else if (ar[2][1]==ar[2][0]&&ar[0][0]==ar[2][2])
             z= obj.display(ar[2][1],t);
              else
                 z= obj.display(13,t);
                if(z==56)
        return 90;
                else
            return 34;
        }
    public int  display(int y,int h)
    {
        if(h%2!=0 &&y!=13)
        {
                System.out.println("Player 1 wins the game");
                return 56;
               
        }
        else if(h%2==0 && y!=13)
        {
                System.out.println("Player 2 wins the game ");
                return 56;
        }
        else
        {
                System.out.println("Draw");
               
        }
        return 78;
       
    }
}