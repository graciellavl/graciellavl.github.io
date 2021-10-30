#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int index = 0;

struct KelasX {
	char nama[100];
	float mat;
	float ipa;
};

void printListNilai(struct KelasX kelasx[]) {
	if(index == 0) {
		puts("Tidak ada data nilai kelas X\n");
	} else {
		puts("Daftar nilai kelas X : \n");
		for(int i = 0; i < index; i++) {
			printf("Data nilai %d: \n", (i+1));
			printf("Nama siswa: %s\n", kelasx[i].nama);
			printf("Nilai Matematika: %.2f\n", kelasx[i].mat);
			printf("Nilai IPA: %.2f\n", kelasx[i].ipa);
		}
	}
}

void printMenu() {
	puts("PROGRAM PENGOLAHAN DATA KELAS");
	puts("============");
	puts("1. Memperlihatkan data kelas X");
	puts("2. Mencari data kelas X");
	puts("3. Memperbaiki data kelas X");
	puts("4. Menghapus data kelas X");
	puts("5. Exit");
}

void menu1(struct KelasX kelasx[]) {
	char tempnama[100];
	char tempmat[100];
	char tempipa[100];

	printf("Masukkan Nama Siswa Ke-%d: ", index+1);
	scanf("%[^\n]", tempnama);
	fflush(stdin);
    srand(time(NULL));   

    float digitmat = (rand() % 3) + 6;      
    float komamat = rand() % 2;
    float totalmat = digitmat + 0.1*komamat;
    printf("Nilai Matematika: %.2f\n", totalmat);

    float digitipa = (rand() % 3) + 6; 
    float komaipa = (rand() % 2);      
    float totalipa = digitipa + 0.1*komaipa;     
    printf("Nilai IPA: %.2f \n", totalipa);

	strcpy(kelasx[index].nama, tempnama);
	// strcpy(kelasx[index].mat, tempmat);
	// strcpy(kelasx[index].ipa, tempipa);
	kelasx[index].mat = totalmat;
	kelasx[index].ipa = totalipa;

	index++;

	puts("Data nilai siswa di kelas X berhasil ditambahkan!");
	getchar();
}

void menu2(struct KelasX kelasx[]) {
	bool isFound = false;

	if(index == 0) {
		puts("Tidak ada data nilai kelas X yang dapat dicari");
		getchar();
	} else {
		char tempnama[100];

		printf("Masukkan nama siswa yang ingin dicari: ");
		scanf("%[^\n]", tempnama);

		for(int i = 0; i < index; i++) {
			if(strcmp(tempnama, kelasx[i].nama) == 0) {
				puts("\n Berikut adalah data siswa kelas X yang berhasil ditemukan :");
				printf("Nama siswa: %s\n", kelasx[i].nama);
				printf("Nilai Matematika: %.2f\n", kelasx[i].mat);
				printf("Nilai IPA: %.2f\n", kelasx[i].ipa);

				isFound = true;
				getchar();
				getchar();
				break;
			}
		}

		if(!isFound) {
			puts("Nama siswa yang dicari tidak berhasil ditemukan");
			getchar();
			getchar();
		}
	}
}

void menu3(struct KelasX kelasx[]) {
	bool isFound = false;

	if(index == 0) {
		puts("Tidak ada data nilai kelas X yang dapat diubah");
		getchar();
	} else {
		char tempnama[100];

		printf("Masukkan nama siswa yang ingin diubah: ");
		scanf("%[^\n]", tempnama);
		fflush(stdin);

		for(int i = 0; i < index; i++) {
			if(strcmp(tempnama, kelasx[i].nama) == 0) {
				puts("\nBerikut adalah data siswa kelas X yang berhasil ditemukan :");
				printf("Nama Siswa: %s\n", kelasx[i].nama);
				printf("Nilai Matematika: %.2f\n", kelasx[i].mat);
				printf("Nilai IPA: %.2f\n", kelasx[i].ipa);

				char tempnama[100];
				float tempmat;
				float tempipa;

				printf("Masukkan Nama siswa baru: ");
				scanf("%[^\n]", tempnama);
				fflush(stdin);

				printf("Masukkan Nilai Matematika siswa baru: ");
				scanf("%f", &tempmat);
				fflush(stdin);

				printf("Masukkan Nilai IPA siswa baru: ");
				scanf("%f", &tempipa);
				fflush(stdin);

				strcpy(kelasx[i].nama, tempnama);
				kelasx[i].mat = tempmat;
				kelasx[i].ipa = tempipa;

				puts("Data telah diubah! \nData siswa baru telah berhasil disimpan");
				isFound = true;
				getchar();
				break;
			}
		}

		if(!isFound) {
			puts("\nNama siswa yang ingin diubah tidak berhasil ditemukan");
			getchar();
		}
	}
}

void menu4(struct KelasX kelasx[]) {
	bool isFound = false;

	if(index == 0) {
		puts("Tidak ada data nilai kelas X yang dapat diubah");
		getchar();
	} else {
		int tempIndex;

		printf("Masukkan nama siswa yang ingin dihapus : ");
		scanf("%d", &tempIndex);

		if(tempIndex < 0 || tempIndex > index) {
			puts("Index siswa yang ingin dihapus tidak ada");
			getchar();
			getchar();
		} else {
				for(int i = tempIndex-1; i < index-1; i++) {
				strcpy(kelasx[i].nama, kelasx[i+1].nama);
				kelasx[i].mat = kelasx[i+1].mat;
				kelasx[i].ipa = kelasx[i+1].ipa;
			}
			index--;

			puts("Index siswa berhasil dihapus");
			getchar();
			getchar();
		}
	}
}

int main() {
	struct KelasX kelasx[100];
	int pilih;

    int i;
    for (i = 0; i < 20; i++) {
        menu1(kelasx);
    }

	do {
		system("cls");
		// printListNilai(kelasx);
		printMenu();

		do {
			printf("\nPILIH MENU : ");
			scanf("%d", &pilih);
			fflush(stdin);
		} while(pilih < 1 || pilih > 5);

		if(pilih == 1) printListNilai(kelasx);
		if(pilih == 2) menu2(kelasx);
		if(pilih == 3) menu3(kelasx);
		if(pilih == 4) menu4(kelasx);
	} while(pilih != 5);

	return 0;
}