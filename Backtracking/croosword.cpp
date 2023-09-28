#include<bits/stdc++.h>
#include<string>
using namespace std;
char grid[10][10];
// x-row no y-col no
bool isplacevertical(int row,int col,string word )
{
    // word ka length column se jda h
    for (int i = 0,j=row; i <word.size(); i++,j++)
    {
        /* code */
        if(grid[j][col]!='-' && grid[j][col]!=word[i])
        {
            return false;
            // mtlb ya fir - and word chaiye wo na mile
        }
    }
    return true;
    


}
void setvertical(int row,int col ,string word,bool s[])
{
   for (int i = 0, j = row; i < word.size(); ++i, j++)
	{
		if (grid[j][col] != '+'){
 
			if(grid[j][col] == word[i])
				s[i] = false;
			else
				s[i] = true;
			grid[j][col] = word[i];
		}
 
	}
    
}
// string ka size
void resetvertical(int row,int col,int len,bool s[])
{
    for (int i = 0,j=row; i<len; i++,j++)
    {
        if(s[i]==true)
        {
            grid[j][col]='-';
        }
        /* code */
        
    }

}
bool isplacehorizontal(int row,int col,string word )
{
    // word ka length column se jda h
    for (int i = 0,j=col; i <word.size(); i++,j++)
    {
        /* code */
        if(grid[row][j]!='-' && grid[row][j]!=word[i])
        {
            return false;
            // mtlb ya fir - and word chaiye wo na mile
        }
    }
    return true;
    


}
void sethorizontal(int row,int col ,string word,bool s[])
{
    for (int i = 0, j = col; i < word.size(); ++i, j++)
	{
		if (grid[row][j] != '+'){
 
			if(grid[row][j] == word[i])
				s[i] = false;
			else
				s[i] = true;
			grid[row][j] = word[i];
		}
 
	}
   
    
}
// string ka size
void resethorizontal(int row,int col,int len,bool s[])
{
    for (int i = 0,j=row; i<len; i++,j++)
    {
        if(s[i]==true)
        {
             grid[row][j]='-';
        }
        /* code */
        
    }

}
void valueset(bool s[],int len)
{
    for (int i = 0; i <len; i++)
    {
        /* code */
        s[i]=false;
    }
    
}
// word ka index
bool solvecrossword(string input[],int size,int index)
{
    if(index == size){
		for(int i =0; i<10; i++){
			for(int j=0; j<10; j++){
 
				cout << grid[i][j] ;
			}
			cout << endl;
		}
		return true;
	}
    // input[index][0]=koi bhi word ka zero character
    // input[0][0]=zeroth word ka  zero character
 
	for(int i =0; i<10; i++){
		for(int j=0; j<10; j++){
 
			if(grid[i][j] == '-' || grid[i][j] == input[index][0]){
				int length = input[index].size();
				bool state[length];
				valueset(state,length);
 
				if(isplacehorizontal(i, j, input[index])){
					sethorizontal(i, j, input[index], state);
					if(solvecrossword(input, size, index+1)){
						return true;
					}
					resethorizontal(i, j,length,state);
				}
 
				if(isplacevertical(i, j, input[index])){
					setvertical(i, j, input[index], state);
					if(solvecrossword(input, size, index+1)){
						return true;
					}
					resetvertical(i, j,length,state);
				}
 
			}
		}
	}
	return false;

}
 
void solveCrossWord(string input[], int size){
 
	bool res =solvecrossword(input, size, 0);
	return;
}


int main()
{
    
    return 0;
}