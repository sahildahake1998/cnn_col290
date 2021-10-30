#include <limits>
using namespace std;

void avgPooling_of_matrix(float* a, int sa, int stride, float* ansM)
{
	int ansRIndex = 0, ansCIndex = 0;
	for(int i=0; i<= sa-stride; i = i + stride)
	{
		for(int j=0; j<= sa - stride; j = j + stride)
		{
			float sum_element = 0;

			for(int p = 0; p<stride; p++)
				for(int q = 0; q<stride; q++)
					sum_element += *(a + sa*(i+p) + (j+q) );

			*(ansM + (sa/stride)*ansRIndex + ansCIndex) = sum_element/(stride*stride);

			if(ansCIndex <= (sa/stride) - 2)
				ansCIndex++;
			else
			{
				ansCIndex = 0;
				ansRIndex++;
			}
		}
	}
}