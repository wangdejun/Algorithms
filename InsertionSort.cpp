 /**
  * 插入排序，想象一下扑克牌插入排序
  * 时间复杂度：O(N*N)
  */
 
 void InsertionSort(Vector<int> &v)
 {
 	for(int i=1;i<v.size();i++)
 	{
 		int cur = v[i];
 		for(int j = i-1;j>=0&&v[j]>cur;j--)
 		{
 			v[j+1]=v[j];
 		}
 		v[j+1] = cur;
 	}
 }
