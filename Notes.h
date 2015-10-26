const string READ_PAR1 = "Enter how many in Parcel Post Table (Grams Dollars):";
const string READ_PAR2 = "Enter Parcel Post Table (mass & cost) information:";
const string PRT_PAR1 = "Parcel Post Table in tabular form with "; 
const string PRT_PAR2 = " entries.";
const string PRT_PAR3 = "      Mass        Cost";
const string PRT_PAR4 = "    ------       -----";
const int PRT_PAR_SFT1 = 10; // setw val1
const int PRT_PAR_SFT1 = 12; // setw val2
const string RE1 = "REJECT_01 - EXCEEDS MASS LIMIT";
const string RE2 = "REJECT_02 - EXCEEDS DIMENSION LIMIT";
const string RE3 = "REJECT_03 - EXCEEDS LENGTH/GIRTH LIMIT";

int tableMasses[MAXSIZE]; 
int tablePrice[MAXSIZE];
int sizeOfTable = 0;// the ParcelPostTable Size

//Reads the parcel post table, reading the size of the table first
//and that many masses and costs.  Assume that the masses are
//ordered in ascending order by mass in (integer) grams.
//params: TODO
void ReadParcelPostTable(int &masses[], float &costs[], int & sizeOfTable)
{
	int index = 0;
	cout << READ_PARS1;
	cin >> sizeOfTable;
	index = sizeOfTable - 1;
	for (int i = 0; i < index; i++)
	{
		cin >> masses[i] >> costs[i];
	}
	
	int packageNum[MAXSIZE];
	int packageMass[MAXSIZE];
	float packageFee[MAXSIZE];
}



//Prints the parcel post table in tabular form. Prints the heading 
//that includes printing the size of the table. (See sample output)
//params: TODO
void PrintParcelPostTable(const int &masses[], const float &costs[], const int &sizeOfTable);
{
	
}

 

//Finds and returns an index of the look-up-mass in the Masses 
//array. Since the Masses array is ordered in ascending order by 
//mass, this function returns the index of the first mass 
//in the masses array such that lookUpMass is less than or equal 
//to masses[i].
//On the off chance that no such index can be found, returns -1.
//params: TODO
int FindIndexOfMass(const int masses[], int lookUpMass, int size);

 

//Returns the largest value in the dim array; size is how many items
//are in the dim array.
//params: TODO
float FindLargestDimension( const int dim[], int size)
{
	int realSize = size - 1;
	for (int q = 0; q < realSize; q++)
	{
		
	}
}

//Returns the girth of a parcel where girth is calculated as twice 
//the difference of the sum of the elements in the dim array and the 
//largest of the dimensions. 
//params: TODO
float Girth( const int dim[], int size);
