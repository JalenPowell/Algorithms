import java.util.Random;
import java.io.FileWriter;
import java.io.IOException;

public class Test
{
        public static void main(String[] args)
        {
                try
                {
                        FileWriter fWrite = new FileWriter("stats.csv");
                        Random r = new Random();
                        int G[][] = new int[1000][1000];
                        for(int i=0;i<1000;i++)
                                for(int j = 0;j<1000;j++)
                                        G[i][j] = r.nextInt();
                        for (int i = 100;i<=1000;i+=100)
                        {
                                int M[][] = new int[i][i];
                                for(int j = 0;j<i;j++)
                                        for(int k =0;k<i;k++)
                                                M[j][k] = G[j][k];
                                final long t0 = System.nanoTime();
                                for(int j = 0;j<i;j++)
                                        for(int k =0;k<i;k++)
                                        {
                                                int buffer = M[j][k];
                                                M[j][k] = M[k][j];
                                                M[k][j] = buffer;                                       
                                        }
                                final long t1 = System.nanoTime();
                                long temp = (t1-t0);
                                fWrite.write(temp+","+(temp*1.0/i)+","+(temp*1.0/(i*i))+","+(temp*1.0/(i*i*i))+"\n");
                                System.out.println(temp+" "+i);
                        }
                        fWrite.close();
                } catch(IOException e) {
                        System.out.println("Error in file writing!");
                        e.printStackTrace();
                }
        }