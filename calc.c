// Code By ./Dahni
#include <stdio.h>

void menuAwal(){
    printf("+------------------------------------+\n\n");
    printf("[1]. Bilangan\n");
    printf("[2]. Kalkulator\n");
}

void menuCalc(){
    printf("+------------------------------------+\n\n");
    printf("[1]. Penjumlahan\n");
    printf("[2]. Pengurangan\n");
    printf("[3]. Perkalian\n");
    printf("[4]. Pembagian\n");
    printf("[5]. Kembali\n");
}

void menuBil(){
    printf("+------------------------------------+\n\n");
    printf("[1]. Fibonanci\n");
    printf("[2]. Bilangan Prima\n");
    printf("[3]. Bilangan Genap\n");
    printf("[4]. Bilangan Ganjil\n");
    printf("[5]. Kembali\n");
}

void banner(){
    printf("+------------------------------------+\n\n");
    printf("[+] Program sederhana\n");
    printf("[+] Hitung bilangan dan Kalulator\n");
    printf("[+] Code By ./Dahni\n");
}


int primaCek(isnum)
int isnum;
{
    int bagi=3, batas;
    if(isnum == 1){
        return(0);
    }
    else if(isnum == 2||isnum == 3){
        return(1);
    }
    else if(isnum % 2 == 0){
        return(0);
    }
    else{
        while (batas > bagi)
        {
            if(isnum % bagi == 0){
                printf("Karena habis dibagi %i\n", bagi);
                return(0);
                break;
            }
            batas = isnum/bagi;
            bagi += 2;
        }
        return(1);
    }
}

void main(){
    int xx, yy, zz, jumder, deret[100], total=0, ulg=0;
    int primBil, cekprimBil, genap, ganjil;
    int *bilTb, a, b, hasil=0;
    float oo, pp, hpg;
    banner();
    menuAwal();
    printf("Chose your option: ");
    scanf("%i", &xx);
    if(xx == 1){
        menuBil();
        printf("Chose your option: ");
        scanf("%i", &yy);
        if(yy == 1){
            printf("+------------------------------------+\n\n");
            printf("Masukan jumlah deret: ");
            scanf("%i", &jumder);
            printf("Hasil deret fibonaci: ");
            do{
                if(ulg<2){
                    deret[ulg]=1;
                }
                else{
                    deret[ulg] = deret[ulg-2]+deret[ulg-1];
                }
                total = total + deret[ulg];
                printf("%i", deret[ulg]);
                ulg++;
            }while (ulg<jumder);
            {
                printf("\nTotal deret : %i\n", total);
            }
            main();
        }
        else if (yy == 2){
            printf("+------------------------------------+\n\n");
            printf("Masukan bilangan: ");
            scanf("%i", &primBil);
            cekprimBil = primaCek(primBil);
            if (cekprimBil == 1)
            {
                printf("Bilangan %i adalah bilangan prima\n", primBil);
            }
            else{
                printf("Bilangan %i bukan bilangan prima\n", primBil);
            }
            main();
        }
        else if(yy ==3){
            printf("+------------------------------------+\n\n");
            printf("Masukkan bilangan: ");
            scanf("%i", &genap);
            if(genap % 2 == 0){
                printf("Bilangan %i adalah bilangan genap\n", genap);
            }
            else{
                printf("Bilangan %i bukan bilanngan genap\n", genap);
            }
            main();
        }
        else if(yy == 4){
            printf("+------------------------------------+\n\n");
            printf("Masukkan bilangan: ");
            scanf("%i", &ganjil);
            if(ganjil % 2 != 0){
                printf("Bilangan %i adalah bilangan ganjil\n", ganjil);
            }
            else{
                printf("Bilangan %i bukan bilanngan ganjil\n", ganjil);
            }
            main();
        }
        else{
            printf("Mohon maaf kelebihan\n");
            main();
        }
        
    }
    else if (xx == 2){
        menuCalc();
        printf("Chose your option: ");
        scanf("%i", &zz);
        if(zz == 1){
            printf("+------------------------------------+\n\n");
            printf("mau jumlah berapa data?: ");
            scanf("%d", &ulg);
            for(int i=0;i<ulg;i++){
                printf("Masukkan nilai ke-%d: ", i+1);
                scanf("%d", &bilTb[i]);
                hasil = hasil+bilTb[i];
            }
            printf("Hasilnya adalah: %i\n", hasil);
            main();
        }
        else if(zz == 2){
            printf("+------------------------------------+\n\n");
            printf("Masukkan bilangan ke-1: ");
            scanf("%d", &a);
            printf("Masukkan bilangan ke-2: ");
            scanf("%d", &b);
            hasil = a - b;
            printf("-------------------------------- -\n");
            printf("Hasilnya adalah: %i\n", hasil);
            main();
        }
        else if(zz == 3){
            printf("+------------------------------------+\n\n");
            printf("Masukkan bilangan ke-1: ");
            scanf("%d", &a);
            printf("Masukkan bilangan ke-2: ");
            scanf("%d", &b);
            hasil = a * b;
            printf("-------------------------------- X\n");
            printf("Hasilnya adalah: %i\n", hasil);
            main();
        }
        else if(zz == 4){
            printf("+------------------------------------+\n\n");
            printf("Masukkan bilangan ke-1: ");
            scanf("%f", &oo);
            printf("Masukkan bilangan ke-2: ");
            scanf("%f", &pp);
            hpg = oo/pp;
            printf("-------------------------------- /\n");
            printf("Hasilnya adalah: %.1f\n", hpg);
            main();
        }
        else{
            printf("Mohon maaf kelebihan");
            main(); 
        }
    }
    else{
        printf("Mohon maaf kelebihan");
        main();
    }
}
