#include <limits>
using namespace std;

void maxPooling_of_matrix(float* a, int sa, int stride, float* ansM)
{
	int ansRIndex = 0, ansCIndex = 0;
	for(int i=0; i<= sa-stride; i = i + stride)
	{
		for(int j=0; j<= sa - stride; j = j + stride)
		{
			float max_element = -std::numeric_limits<double>::infinity();
			for(int p = 0; p<stride; p++)
			{
				for(int q = 0; q<stride; q++)
				{
					if( *(a + sa*(i+p) + (j+q) ) > max_element)
						max_element = *(a + sa*(i+p) + (j+q) );
				}
			}

			*(ansM + (sa/stride)*ansRIndex + ansCIndex) = max_element;

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