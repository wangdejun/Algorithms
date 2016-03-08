/**
 * QuickSort快速排序
 * 时间复杂度N*log（N）
 * ----------------
 * 取决于随机因子的选择，一般取第一个数作为pivot基本有序境况下，
 * 会退化到N*N的复杂度表现不如归并排序,但是大多数情况下是最快的排序，比归并排序好在常数级.
 */
void QuickSort(Vector<int> &v,int start,int stop)
{
	if(stop>start)
	{
		int pivot = Partition(v,start,stop);
		QuickSort(v,start,pivot-1);
		QuickSort(v,pivot+1,stop)
	}
}
