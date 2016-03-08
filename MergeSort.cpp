 /**
  * MergeSort归并排序
  * 时间复杂度N*log（N），比N的平方要好太多，
  * 比快速排序更加适合所有的情况，但是快排序在大多数情况下比归并排序要好
  */
void MergeSort(Vector<int> &v)
{
	if(v.size() > 1)
	{
		int n1 = v.size()/2;
		int n2 = v.size()-n1;
		Vector<int> left = Copy(v,0,n1);
		Vector<int> right = Copy(v,n1,n2);
		MergeSort(left);
		MergeSort(right);
		Merge(v,left,right);
	}
}
