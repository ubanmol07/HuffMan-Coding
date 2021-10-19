#include <iostream>
#include "huffman.h"
using namespace std;

//Driver Code
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		cout << "Usage:\n\t huffmanCoding inputfile outputfile" << '\n';
		exit(1);
	}
	
	huffman h(argv[1], argv[2]);
	h.create_pq();
	h.create_huffman_tree();
	h.calculate_huffman_codes();
	h.coding_save();
	cout << '\n';
	
	return 0;
}
