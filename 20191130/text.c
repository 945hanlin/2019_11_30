//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int search(int scr[],int n,int f ){
//	int left = 0;
//	int right = n - 1;
//	int mid;
//	while (left<right){
//		mid = (left + right) / 2;
//		if (scr[mid] < f){
//			left = mid + 1;
//		}
//		else if (scr[mid]>f){
//			right = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main(){
//	int arr[10] = {  1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	printf("%d\n", search(arr,10,2));
//void shurumima(){
//	int password = 666666;
//	int a = 1;
//	for (int a; a < 4; a++){
//		printf("ÇëÊäÈëÃÜÂë");
//		scanf("%d"&)
//		if (strcmp(password, "666666") == 0){
//			printf("ÃÜÂëÕýÈ·\n");
//			break;
//		}
//	}
//	printf("ÍË³ö³ÌÐò\n");
//}
//int main(){
//	shurumima();
//	system("pause");
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char ch;
	while (1){
		ch = getchar();
		if (isalpha(ch)){
			putchar(ch ^ 32);
		}
		else if (isdigit(ch)){

		}
		else{
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}
//	char arr[10] = { 0 };
//	int i = 0;
//	while (i < 3){
//		printf("ÇëÊäÈëÄãµÄÃÜÂë\n");
//		scanf("%s", &arr);
//		if (strcmp(arr, "666666") == 0){
//			printf("ÃÜÂëÕýÈ·\n");
//			break;
//		}i++; 
//	}if (i == 3){
//		printf("ÃÜÂë´íÈý´Î£¬³ÌÐò½áÊø\n");
//	}
	
