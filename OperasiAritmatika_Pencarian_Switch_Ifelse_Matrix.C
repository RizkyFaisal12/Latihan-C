//17/3/2026

#include <stdio.h>
#include <stdlib.h>

int main (){

//pengisian matrix 1
    //1.deklarasi jumlah baris dan kolom pada matrix 1
    int matrixbaris1;
     printf ("\tMATRIX 1\n");
     printf("*Input Baris dan Kolom\n");
     printf ("Masukkan jumlah baris matrix ke-1 = ");
     scanf ("%d", &matrixbaris1);

    int matrixkolom1;
     printf("Masukkan jumlah kolom matrix ke-1 = ");
     scanf("%d", &matrixkolom1);

    int matrix1 [matrixbaris1][matrixkolom1];

    //2. pengisian nilai baris dan kolom matrix 1
     printf("*Input Nilai Baris dan Kolom\n");
     for (int a =0;a<matrixbaris1;a++){
        for (int b=0;b<matrixkolom1;b++){
         printf("Masukkan nilai untuk baris ke-%d kolom ke-%d: ", a + 1, b + 1);
         scanf("%d", &matrix1[a][b]);
        }

        printf("\n");
    }

    //3. output matrix 1
     printf ("*Output Matrix 1\n");
     for(int i=0;i<matrixbaris1;i++){
        for(int j=0;j<matrixkolom1;j++){
         printf("%d ",matrix1[i][j]);
        }

        printf("\n");
    }

//2. pengisian matrix  2 
    //1.deklarasi jumlah baris dan kolom pada matrix 1
    int matrixbaris2;
     printf("\n\tMATRIX 2\n");
     printf("\n*Input Baris dan Kolom\n");
     printf ("\nMasukkan jumlah baris matrix ke-2 = ");
     scanf ("%d", &matrixbaris2);

    int matrixkolom2;
     printf("Masukkan jumlah kolom matrix ke-2 = ");
     scanf("%d", &matrixkolom2);

    int matrix2 [matrixbaris2][matrixkolom2];

    //2. pengisian nilai baris dan kolom matrix 2
    printf("\n*Input Nilai Baris dan Kolom\n");
    for (int a =0;a<matrixbaris2;a++){
        for (int b=0;b<matrixkolom2;b++){
         printf("Masukkan nilai untuk baris ke-%d kolom ke-%d: ", a + 1, b + 1);
         scanf("%d", &matrix2[a][b]);
        }

        printf("\n");
    }

    //3. output matrix 2
     printf ("*Output Matrix 2\n");
    for(int i=0;i<matrixbaris2;i++){
        for(int j=0;j<matrixkolom2;j++){
         printf("%d ",matrix2[i][j]);
        }

        printf("\n");
    }

    //pemiilihan operasi
    int pemilihanoperasi;
    int i=1;
  
    while (i>=1){
    printf("operasi matrix (1) atau pencarian matrix (2) = ");
    scanf ("%d",&pemilihanoperasi);
        
        switch (pemilihanoperasi){
            case 1:
             if (matrixbaris1==matrixbaris2 && matrixkolom1==matrixkolom2){ 
             int pemilihanjenisoperasi;
             int matrixhasil [matrixbaris1][matrixkolom2];
             int j=1;

             printf ("Penjumlahan matrix (1)\n");
             printf("penguranganmatrix (2)\n");
             printf("perkalian matrix (3)\n");
             printf("pembagian matrix (4)\n");

             while (j>=1){
             printf ("Masukan jenis operasi = ");
             scanf("%d",&pemilihanjenisoperasi);
                switch(pemilihanjenisoperasi){
                    case 1 :
                        for (int i=0;i<matrixbaris1;i++){
                            for(int j=0;j<matrixkolom2;j++){
                                matrixhasil [i][j] = matrix1[i][j]+matrix2[i][j];
                            }    
                        }
                        printf("Hasil matrix = \n");
                        for (int i=0;i<matrixbaris1;i++){
                            for(int j =0;j<matrixkolom2;j++){
                                printf ("%d ",matrixhasil[i][j]);
                            }
                            printf("\n");
                        }
                        printf ("Berhenti dari pilihan jenis operasi? ketik 0 = ");
                        scanf("%d",&j);
                        break;
                        
                    case 2 :
                        for (int i=0;i<matrixbaris1;i++){
                            for(int j=0;j<matrixkolom2;j++){
                                matrixhasil [i][j] = matrix1[i][j]-matrix2[i][j];
                            }    
                        }
                        printf("Hasil matrix = \n");
                        for (int i=0;i<matrixbaris1;i++){
                            for(int j =0;j<matrixkolom2;j++){
                                printf ("%d ",matrixhasil[i][j]);
                            }
                            printf("\n");
                        }
                        printf ("Berhenti dari pilihan jenis operasi? ketik 0 = ");
                        scanf("%d",&j);
                        break;
                         
                    case 3 :
                        for (int i=0;i<matrixbaris1;i++){
                            for(int j=0;j<matrixkolom2;j++){
                                matrixhasil [i][j] = matrix1[i][j]*matrix2[i][j];
                            }    
                        }
                        printf("Hasil matrix = \n");
                        for (int i=0;i<matrixbaris1;i++){
                            for(int j =0;j<matrixkolom2;j++){
                                printf ("%d ",matrixhasil[i][j]);
                            }
                            printf("\n");
                        }
                        printf ("Berhenti dari pilihan jenis operasi? ketik 0 = ");
                        scanf("%d",&j);
                        break;
                         
                    case 4:
                        for (int i=0;i<matrixbaris1;i++){
                            for(int j=0;j<matrixkolom2;j++){
                                matrixhasil [i][j] = matrix1[i][j]/matrix2[i][j];
                            }    
                        }
                        printf("Hasil matrix = \n");
                        for (int i=0;i<matrixbaris1;i++){
                            for(int j =0;j<matrixkolom2;j++){
                                printf ("%d ",matrixhasil[i][j]);
                            }
                            printf("\n");
                        }
                        printf ("Berhenti dari pilihan jenis operasi? ketik 0 = ");
                        scanf("%d",&j);
                        break;

                    default :
                        printf ("Operasi tidak ada!\n");
                        printf ("Berhenti dari pilihan jenis operasi? ketik 0 = ");
                        scanf("%d",&j);
                }
             } printf("OPERASI SELESAI!\n");
               printf ("Berhenti dari pemilihan operasi? ketik 0 = ");
               scanf("%d",&i);
            } else {
                printf ("Baris matrix 1&2 tidak sinkron!\n");
                printf("kolom matrix 1&2 tidak  sinkron!\n");
                printf ("Kamu hanya bisa menggunakan operasi pencarian!\n");
            }
            break;
            
            case 2:{
                int matrixdicari;
                int k=1;

                while(k>=1){
                printf("masukkan matrix yang dicari (1) atau (2) = ");
                scanf("%d",&matrixdicari);

                if (matrixdicari == 1){
                    printf ("*Output Matrix 1\n");
                    for(int i=0;i<matrixbaris1;i++){
                        for(int j=0;j<matrixkolom1;j++){
                         printf("%d ",matrix1[i][j]);
                         }

                         printf("\n");
                    }
                    printf("Berhenti dari pemilihan jenis operasi? ketik 0 = ");
                    scanf("%d", &k);
                } else if(matrixdicari==2){
                    printf ("*Output Matrix 2\n");
                    for(int i=0;i<matrixbaris2;i++){
                        for(int j=0;j<matrixkolom2;j++){
                         printf("%d ",matrix2[i][j]);
                        }

                        printf("\n");
                    }
                    printf("Berhenti dari pemilihan jenis operasi? ketik 0 = ");
                    scanf("%d", &k);
                }else{
                    printf("Matrix tidak ditemukan!\n");
                    printf("Berhenti dari pemilihan jenis operasi? ketik 0 = ");
                    scanf("%d", &k);
                }
             }printf("OPERASI SELESAI!\n");
              printf ("Berhenti dari pemilihan operasi? ketik 0 = ");
              scanf("%d",&i);

             break;
            }
             default :
             printf ("Pemilihan operasi tidak ditemukan!");
             printf ("Berhenti dari pemilihan operasi? ketik 0 = ");
             scanf("%d",&i);
             break;
            
        } 
    }

            





return 0;
}
  