/*
	//////////////////////////////////////////////////////////////////////////////////////////
	//											//
	//											//
	//											//
	//        			MANDLEBROT FRACTAL GENERATOR				//
	//											//
	//					ASAD WAHEED					//
	//											//
	//											//
	//////////////////////////////////////////////////////////////////////////////////////////
*/

#include <fstream>
#include <iostream>
#include <math.h>
using namespace std;

// Find number of iterrations , n
int findMandlebrotIter(double cr, double ci, int max_iterations)
{
	int i = 0;
	double
		zReal = 0.0,
		zImaginary = 0.0;

	while (i < max_iterations && zReal * zReal + zImaginary * zImaginary < 4.0)
	{
		double temp = zReal * zReal - zImaginary * zImaginary + cr;
		zImaginary = 2.0 * zReal * zImaginary + ci; // general complex number = a + bi
		zReal = temp;
		i++;
	}

	return i;
}
// Real number mapping function
double mapToReal(int x, int imageWidth, double minR, double maxR)
{
	double range = maxR - minR;
	// [0, width]
	// [0, maxR - minR] - val * range / width
	
	// [minR, maxR] - last step + minR
	return x * (range / imageWidth) + minR;
}

// Imaginary number mapping function
double mapToImaginary(int y, int imageHeight, double minI, double maxI)
{
	double range = maxI - minI;
	return y * (range / imageHeight) + minI;
}
int main() 
{
	printf("\tDeveloper: Asad_Waheed\n\n\n///////////////////////////////////////");
	printf("\n\nMandlebrot Fractal Program 1.0\n\n");
	printf("///////////////////////////////////////\n\n\n\n");
	
	// Get the required  input values from txt file
	
	ifstream inputFile("input.txt");
	
	int
		imageWidth,
		imageHeight,
		maxN;

	double
		minR,
		maxR,
		minI,
		maxI;

	if (!inputFile)
	{
		cout << " Cannot open file!\n";
		cin.ignore();
		return 0;
	}
	inputFile >> imageWidth >> imageHeight >> maxN;
	inputFile >> minR >> maxR >> minI >> maxI;
	inputFile.close();

		// Open output file, and write the PPM header

		ofstream outputFile("output_img.ppm");
		outputFile << "P3" << endl; //	"Magic Number" - PPM file
		outputFile << imageWidth << " " << imageHeight << endl; // dimensions
		outputFile << "256" << endl; //	Max pixel RGB value

	
	//For each pixel

		for (int y = 0; y < imageHeight; y++) // Rows
		{
			for (int x = 0; x < imageWidth; x++)	// pixels per row
			{
				//...Find real and imaginary values for c, corresponding
				// to that x,y pixel in the image
				
				double cr = mapToReal(x, imageWidth, minR, maxR);
				double ci = mapToImaginary(y, imageHeight, minI, maxI);

				//...Find the number of iterations in the mandlebrot formula
				// using aforementioned "c" value

				int n = findMandlebrotIter(cr, ci, maxN);

				// Map the resulting num of iterations to an RGB value

				int r = ((int)(n * sinf(n)) % 256); //change this for more interesting colors
				int g = (n % 256); //change this for more interesting colors
				int b = ((n*n + 4) % 256); //change this for more interesting colors
				
				// output this to the image
				outputFile << r << " " 
						   << g << " " 
						   << b << " ";
			}
			outputFile << endl;
		}
		outputFile.close();
		cout << "Done!" << endl; 
		return 0;
}
