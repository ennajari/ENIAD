import java.util.*;
public class Competition{
    public static void main(String[]args){
           Scanner sc = new Scanner(System.in);
        System.out.println("Donner la demesnsio de votre matrice:");
           int n = sc.nextInt();

        int [][] M = new int[n][n];
        // creation de matrice
        for(int i = 0 ; i < n ; i++){
                 for(int j = 0 ; j <n ; j++){
                       System.out.println("Taper elements M["+i+"]["+j+"]=");
                        M [i][j]= sc.nextInt() ;
                      
                    }  
    }
    // transposee
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j <i-1 ; j++){
    //           M[i][j] = M[j][i];
    //           System.out.println(M[i][j] ) ;
    //        }
    //     }
    //     System.out.println();
    // //  affichage
    
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         int d;
    //         d=M[i][j];
    //         M[i][j] =M[i][n-1-j];    
    //         M[i][n-1-j]=d;
    //         System.out.println(M[i][j] ) ;
    //        }
    //     }
    }
}