# File input/output
## Input to the file  
the code that does this is:  
```  
std::ifstream inputFile("gamedata/scores.txt");
if (inputFile.is_open())
{
	// >> reads data
	inputFile >> hiScore;
	inputFile.close();
}
```
First you create an ifstream object that opens
the the file `gamedata/scores.txt`. Next the code
checks wether the file has been successfully opened
in order to not point to unexpected data (keep it 
`memory safe`). then using the inbuilt `>>`
operator which concatenates any `int` value
together then moves it to `hiScore`. After which the file is closed to avoid corruption
however if the file failed to open there is no point in cllosing it.  
## Output to the file
(I couldn't find the code if it is wrong)  
```
std::ofstream outputFile("gamedata/scores.txt");
outputFile << hiScore;
outputfile.cose();
```
First you create an ofstream object that opens the file
`gamedata/scores.txt`
then you write to it using the `<<` lets you `insert formatted output` and then you close then file to avoid corruption
