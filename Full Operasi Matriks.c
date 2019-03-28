#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
	{
	/*Inisialisasi Integer*/
   float a[10][10];
   float b[10][10];
   float c[10][10];
   float e[10][10];
   int x,y,baris,kolom,Pilihan,k,n;
   float ratio,d;
	
   /*input banyak baris dan kolom*/ 
   	printf("Masukkan banyak baris:");
   		scanf("%d",&baris);
   			printf("Masukkan banyak kolom:");
   				scanf("%d",&kolom);
   	system("cls");
   	
   /*Input matriks A*/				
   for(x=0;x<baris;x++){
       for(y=0;y<kolom;y++){
          printf("Masukkan elemen matriks A %d,%d\t",x+1,y+1);
		  scanf("%2f",&a[x][y]);
       						}
  						}
	
	
	/*Output matriks A*/
	printf("\nMatriks A:\n");
	for(x=0;x<baris;x++){
       for(y=0;y<kolom;y++){
           printf("[%.2f] ",a[x][y]);
      						}
    				printf("\n");
   						}
	printf("\n\n");
	
	/*input matriks B*/
   for(x=0;x<baris;x++){
       for(y=0;y<kolom;y++){
           printf("Masukkan elemen matrik B %d,%d\t",x+1,y+1);
		   scanf("%f",&b[x][y]);
       						}
   						}
   				
   	/*output matriks B*/					
   	printf("\nMatriks B:\n");
		for(x=0;x<baris;x++){
       	for(y=0;y<kolom;y++){
           printf("[%.2f] ",b[x][y]);
      						}
     	 			printf("\n");
   						}
   	printf("\n\n");
   	/*Input matriks C*/				
   for(x=0;x<baris;x++){
       for(y=0;y<kolom;y++){
          printf("Masukkan elemen matriks C(untuk Invers) %d,%d\t",x+1,y+1);
		  scanf("%f",&e[x][y]);
       						}
  						}
  		/*output matriks C*/					
   	printf("\nMatriks C:\n");
		for(x=0;x<baris;x++){
       	for(y=0;y<kolom;y++){
           printf("[%.2f] ",e[x][y]);
      						}
     	 			printf("\n");
   						}
   	
	system("PAUSE");

		
	
	do{
	system("cls");
	/*DO-WHILE*/
	printf("Pilihan :\n1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian\n5. Transpose\n6. Invers\n7. Exit\nMasukkan pilihan anda:");
	scanf("%d",&Pilihan);
	if(Pilihan==1){system("cls");
	/*Output matriks A*/
	printf("\nMatriks A:\n");
	for(x=0;x<baris;x++){
       for(y=0;y<kolom;y++){
           printf("[%.2f] ",a[x][y]);
      						}
    				printf("\n");
   						}
	printf("\n\n");
   				
   	/*output matriks B*/					
   	printf("\nMatriks B:\n");
		for(x=0;x<baris;x++){
       	for(y=0;y<kolom;y++){
           printf("[%.2f] ",b[x][y]);
      						}
     	 			printf("\n");
   						}
	/*Rumus matriks*/
   	for(x=0;x<baris;x++){
       		for(y=0;y<kolom;y++){
           		c[x][y]=a[x][y]+b[x][y];
       							}
  								}
  	/*Hasil Matriks*/	
			printf("\n\nPenjumlahan matriks A dan B :\n");					
   			for(x=0;x<baris;x++){
       		for(y=0;y<kolom;y++){
           		printf("[%.2f] ",c[x][y]);
      							}
      				printf("\n");
   								}
  }
  
		  		if(Pilihan==2){system("cls");
		  	/*Output matriks A*/
			printf("\nMatriks A:\n");
			for(x=0;x<baris;x++){
    		   for(y=0;y<kolom;y++){
     		      printf("[%.2f] ",a[x][y]);
     		 						}
    						printf("\n");
   								}
				printf("\n\n");
   				
		   	/*output matriks B*/					
 		  	printf("\nMatriks B:\n");
				for(x=0;x<baris;x++){
   		    	for(y=0;y<kolom;y++){
     		      printf("[%.2f] ",b[x][y]);
      								}
     	 					printf("\n");
   								}
  			/*Rumus matriks*/
   					for(x=0;x<baris;x++){
       				for(y=0;y<kolom;y++){
           				c[x][y]=a[x][y]-b[x][y];
       									}
  										}
  			/*Hasil Matriks*/	
					printf("\n\nPengurangan matriks A dan B :\n");					
   					for(x=0;x<baris;x++){
       				for(y=0;y<kolom;y++){
           				printf("[%.2f] ",c[x][y]);
      									}
  		    				printf("\n");
   										}
 		 }
  
 			 if(Pilihan==3){system("cls");
 			 	/*Output matriks A*/
				printf("\nMatriks A:\n");
				for(x=0;x<baris;x++){
  			     for(y=0;y<kolom;y++){
   			        printf("[%.2f] ",a[x][y]);
   			   						}
    							printf("\n");
   									}
				printf("\n\n");
				
  			 	/*output matriks B*/					
  			 	printf("\nMatriks B:\n");
					for(x=0;x<baris;x++){
  			     	for(y=0;y<kolom;y++){
  			         printf("[%.2f] ",b[x][y]);
   			   						}
  			   	 			printf("\n");
   									}
 				/*Rumus matriks*/
   					for(x=0;x<baris;x++){
   		    		for(y=0;y<kolom;y++){
   		        		c[x][y]=a[x][y]/b[x][y];
       									}
  										}
  				/*Hasil Matriks*/	
						printf("\n\nPembagian matriks A dan B :\n");					
   						for(x=0;x<baris;x++){
       					for(y=0;y<kolom;y++){
   			        		printf("[%.2f] ",c[x][y]);
      							}
   				   				printf("\n");
 			  								}
 			 }
	
					if(Pilihan==6){system("cls");
							/*Matriks C sebelum Invers*/
 					 	printf("Matriks C\n");
						for(x=0; x<baris; x++){
						for(y=0; y<kolom; y++){
						printf("[%.2f] ", e[x][y]);
												}
						printf("\n");
						}
						system("PAUSE");
						for(x = 0; x < baris; x++){
      					  for(y = baris; y < 2*baris; y++){
        				    if(x==(y-baris))
          				      e[x][y] = 1.0;
          				  else
          				      e[x][y] = 0.0;
       				 }
   				 }
						for(x = 0; x < baris; x++){
       					 for(y = 0; y < baris; y++){
          					  if(x!=y){
           					     ratio = e[y][x]/e[x][x];
              					  for(k = 0; k < 2*baris; k++){
              					      e[y][k] -= ratio * e[x][k];
             					   }
          					  }
       					 }
   					 }	
						 for(x = 0; x < baris; x++){
    				    d = e[x][x];
      					  for(y = 0; y < 2*baris; y++){
      				      e[x][y] /= d;
     					   }
   						 }	
						 printf("\nInvers matriks C adalah : \n");
    					for(x = 0; x < baris; x++){
       					 for(y = baris; y < 2*baris; y++){
        				    printf("[%.2f] ", e[x][y]);
        				    
       						 }
       					 printf("\n");
   						}

				}
  
 					 if(Pilihan==5){
 					 	system("cls");
 					 	/*Matriks A sebelum Transpose*/
 					 	printf("Matriks A\n");
						for(x=0; x<baris; x++){
						for(y=0; y<kolom; y++){
						printf("[%.2f] ", a[x][y]);
												}
						printf("\n");
						}
						
						/*Matriks A setelah Transpose*/
						printf("\nMatriks A setelah ditranspose\n");

						float transpose[kolom][baris];

						for(x=0; x<kolom; x++){
						for(y=0; y<baris; y++){
						transpose[x][y]=a[y][x];
						printf("[%.2f] ", transpose[x][y]);
											}
						printf("\n");
						}
					
						
						/*Matriks B sebelum Transpose*/
 					 	printf("\nMatriks B\n");
						for(x=0; x<baris; x++){
						for(y=0; y<kolom; y++){
						printf("[%.2f] ", b[x][y]);
												}
						printf("\n");
						}
						
						/*Matriks B setelah Transpose*/
						printf("\nMatriks B setelah ditranspose\n");

						float transpose2[kolom][baris];

						for(x=0; x<kolom; x++){
						for(y=0; y<baris; y++){
						transpose2[x][y]=b[y][x];
						printf("[%.2f] ", transpose2[x][y]);
											}
						printf("\n");
											}
 												 }
 							if(Pilihan==4){system("cls");
 								/*Output matriks A*/
							printf("\nMatriks A:\n");
							for(x=0;x<baris;x++){
   						    for(y=0;y<kolom;y++){
     						      printf("[%.2f] ",a[x][y]);
      												}
    										printf("\n");
   												}
							printf("\n\n");
	 				
   							/*output matriks B*/					
   							printf("\nMatriks B:\n");
								for(x=0;x<baris;x++){
     						  	for(y=0;y<kolom;y++){
     						      printf("[%.2f] ",b[x][y]);
      												}
     							 			printf("\n");
   												}
 								/*Rumus matriks*/
   								for(x=0;x<baris;x++){
       							for(y=0;y<kolom;y++){
           							c[x][y]=a[x][y]*b[x][y];
       										}
  											}
  								/*Hasil Matriks*/	
							printf("\n\nPerkalian matriks A dan B :\n");					
   								for(x=0;x<baris;x++){
       							for(y=0;y<kolom;y++){
           					printf("[%.2f] ",c[x][y]);
      										}
      							printf("\n");
   											}
  								}
							 
  	
							if(Pilihan==7){system("cls");
   								printf("Terima Kasih telah menggunakan program penghitungan matriks!!!");
  								}
  	
  							if(Pilihan==0){system("cls");
	 							 printf("Pilihan tidak ada NUB!!");
									}
									if(Pilihan>7){system("cls");
	 								 printf("Pilihan tidak ada NUB!!");
										}
									getch();
									}while(Pilihan!=7);
}
