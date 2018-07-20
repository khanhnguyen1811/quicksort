//thuat toan quick sort. 
#include <iostream> 
using namespace std;
//khai bao ham swap; 
void Swapp(int *pa, int *pb){
	int tam = *pa; 
	*pa = *pb; 
	*pb = tam; 
	
}
//khai bao location. 
int location(int arr[], int low, int high){
	int i, j; 
	i = low - 1; 
	int pivot = arr[high];
	for (j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			i++; 
			Swapp(&arr[i], &arr[j]);
		}
	}
	Swapp(&arr[i + 1], &arr[high]);
	return i + 1; 
}
//khai bao function Quicksort. 
void QuickSort(int arr[], int l, int h){
	if (l < h)
	{
		int loc = location(arr, l, h);
		QuickSort(arr, l, loc - 1); 
		QuickSort(arr, loc + 1, h);
	}
}
//khai bao ham chinh. 
int main(){
	int arr[100], i, sopt; 
	cout << "nhap so phan tu mang: "; cin >> sopt; 
	for (i = 0; i < sopt; i++)
	{
		cin >> arr[i]; 
	}
	QuickSort(arr, 0, sopt - 1);
	for (i = 0; i < sopt; i++)
	{
		cout << arr[i] << " "; 
	}
	return 0; 
}