#include <stdio.h>
#include <string.h> 
int countLetters(char* str) {
    int count = 0;
    while (*str) {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')) {
            count++;
        }
        str++;
    }
    return count;
}
int countDigits(char* str) {
    int count = 0;
    while (*str) {
        if (*str >= '0' && *str <= '9') {
            count++;
        }
        str++;
    }
    return count;
}
int countSpecialChars(char* str) {
    int count = 0;
    while (*str) {
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || 
              (*str >= '0' && *str <= '9') || *str == ' ')) { 
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[1000]; 
    char* pStr = str; 
    int choice; 
    int isInput = 0; 

    do {
        printf("\n=== MENU ===\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1: {
                printf("Nhap vao chuoi: ");
                gets(str); 
                isInput = 1; 
                break;
            }
            case 2: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    printf("Chuoi da nhap la: %s\n", pStr);
                }
                break;
            }
            case 3: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    int letters = countLetters(pStr);
                    printf("So luong chu cai trong chuoi: %d\n", letters);
                }
                break;
            }
            case 4: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    int digits = countDigits(pStr);
                    printf("So luong chu so trong chuoi: %d\n", digits);
                }
                break;
            }
            case 5: {
                if (!isInput) {
                    printf("Ban chua nhap chuoi. Vui long nhap chuoi truoc!\n");
                } else {
                    int specialChars = countSpecialChars(pStr);
                    printf("So luong ky tu dac biet trong chuoi: %d\n", specialChars);
                }
                break;
            }
            case 6: {
                printf("Thoat chuong trinh. Hen gap lai!\n");
                break;
            }
            default: {
                printf("Lua chon khong hop le. Vui long thu lai!\n");
                break;
            }
        }
    } while (choice != 6); 

    return 0;
}

