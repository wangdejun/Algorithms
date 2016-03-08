 /**
  * 选择排序算法
  * 时间复杂度：O（N*N）
  * ----------------------------
  * 首先确定第一个，如果后边所有的元素的最小值比这个还小，那么交换之以此类推，就会确定前边的一定比后边的小，就会形成完成排序
  */
void Selection(Vector<int> &v)
 {
 	for(int i=0;i<v.size()-1;i++)
 	{
 		int minIndex = i;//find the index of min in range of i to end
 		for(int j=i+1;j<v.size();j++)
 		{
 			if(v[j]<v[minIndex])
 			{
 				minIndex = j;
 			}
 		}

 		Swap(v[i],v[minIndex]);//swap in to front;
 	}
 }
