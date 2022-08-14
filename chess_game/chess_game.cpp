#include <iostream>
#include <string>
void players(std::string** arr , int size);
void gprint(std::string** arr,int size);
void printBoard();
void  play_game(std::string** arr, int size);


void printBoard()
{

	std::cout << "\t  Chess Game\n" << std::endl;
	
	int size = 8;
	std::string** arr = new std::string*[size];
	for(int i = 0; i < size;++i) {
	  arr[i] = new std::string[size];
	 }
	for(int i = 0; i < size;++i) {
	 for(int j = 0; j < size;++j) {
	  arr[i][j]  = " ";
	 }
	}

	players(arr,size);



}



void players (std::string** arr , int size) {

      	std::string king = "♔"; 
        std::string queen = "♕";
		std::string rook = "♖";
		std::string bishop = "♗";
		std::string night = "♘";
		std::string pawn = "♙";

      	std::string King = "♚"; 
        std::string Queen = "♛";
		std::string Rook = "♜";
		std::string Bishop = "♝";
		std::string Night = "♞";
		std::string Pawn = "♟︎";


		arr[0][0] =  rook;
       	arr[0][1] =  night; 
		arr[0][2] =  bishop;
       	arr[0][3] =  queen;
    	arr[0][4] =  king;
       	arr[0][5] =  bishop;
		arr[0][6] =  night;
       	arr[0][7] =  rook;


    	arr[1][0] =  pawn;
       	arr[1][1] =  pawn; 
		arr[1][2] =  pawn;
       	arr[1][3] =  pawn;
    	arr[1][4] =  pawn;
       	arr[1][5] =  pawn;
		arr[1][6] =  pawn;
       	arr[1][7] =  pawn;




     	arr[7][0] =  Rook;
       	arr[7][1] =  Night; 
		arr[7][2] =  Bishop;
       	arr[7][3] =  Queen;
    	arr[7][4] =  King;
       	arr[7][5] =  Bishop;
		arr[7][6] =  Night;
       	arr[7][7] =  Rook;


    	arr[6][0] =  Pawn;
       	arr[6][1] =  Pawn; 
		arr[6][2] =  Pawn;
       	arr[6][3] =  Pawn;
    	arr[6][4] =  Pawn;
       	arr[6][5] =  Pawn;
		arr[6][6] =  Pawn;
       	arr[6][7] =  Pawn;



      gprint(arr,size);
	  play_game(arr,size);
	 
}

void play_game(std::string** arr,int size) {
  std::string no;
    std::cout << "Do you want to start" << std::endl;
    std::cin >> no;
 do{
  
    std::string king = "♔"; 
    std::string queen = "♕";
		std::string rook = "♖";
		std::string bishop = "♗";
		std::string night = "♘";
		std::string pawn = "♙";

    std::string King = "♚"; 
    std::string Queen = "♛";
		std::string Rook = "♜";
		std::string Bishop = "♝";
		std::string Night = "♞ ";
		std::string Pawn = "♟︎";

   int  x;
   int  y;
   int change_x;
   int change_y;
  
   std::cout << "Choose correct  position x and  y " << std::endl;
   std::cin >> x >> y;
   std::cout << "Input this  position that  you  change  " << std::endl;
   std::cin >> change_x  >> change_y ;
    
    
    ///pawn start
    if(( x == 6 ) && (y == 0)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = Pawn;
	}
     if(( x == 6 ) && (y == 1)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = Pawn;
	}
   
    if(( x == 6 ) && (y == 2)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = Pawn;
	}
	 if(( x == 6 ) && (y == 3)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = Pawn;
	}
	 if(( x == 6 ) && (y == 4)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = Pawn;
	}
	 if(( x == 6 ) && (y == 5)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = Pawn;
	}
	 if(( x == 6 ) && (y == 6)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = Pawn;
	}
	
	 if(( x == 6 ) && (y == 7)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = Pawn;
	}
	
	
	  if(( x == 1 ) && (y == 0)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = pawn;
	}
	if(( x == 1 ) && (y == 1)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = pawn;
	}
	
	if(( x == 1 ) && (y == 2)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = pawn;
	}
	
	if(( x == 1 ) && (y == 3)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = pawn;
	}
	
	if(( x == 1 ) && (y == 4)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = pawn;
	}
	
	if(( x == 1 ) && (y == 5)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = pawn;
	}
	
	if(( x == 1 ) && (y == 6)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = pawn;
	}
	
	if(( x == 1 ) && (y == 7)) {
		arr[x][y] = " ";	
	   arr[change_x][change_y] = pawn;
	}
	
	///pawn finall



	///start Night
	
	if(( x == 7 ) && (y == 1)) {
		if(arr[change_x][change_y] == " "){
		  		arr[x][y] = " ";
	   arr[change_x][change_y] = Night;
		}
	}
   
   if(( x == 7 ) && (y == 6)) {
		if(arr[change_x][change_y] == " "){
		  		arr[x][y] = " ";
	   arr[change_x][change_y] = Night;
		}
	}



   if(( x == 0 ) && (y == 1)) {
		if(arr[change_x][change_y] == " "){
		  		arr[x][y] = " ";
	   arr[change_x][change_y] = night;
		}
	}
   
   if(( x == 0) && (y == 6)) {
		if(arr[change_x][change_y] == " "){
		  		arr[x][y] = " ";
	   arr[change_x][change_y] = night;
		}
	}
/// final night

    /// start King
 if(( x == 7) && (y == 4)) {
		
		if(arr[change_x][change_y] == " "){
		  arr[x][y] = " ";
	   arr[change_x][change_y] = King;
		}
	}
	
	if(( x == 0) && (y == 4)) {
	
		if(arr[change_x][change_y] == " "){	
		  arr[x][y] = " ";
	   arr[change_x][change_y] = king;
		}
	}
	
	//final king
	
	
	// start Bishop
	
	if(( x == 7) && (y == 2)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x-1][y-1] == " ") ||(arr[x-1][y+1] == " ")){
		  arr[x][y] = " ";
	   arr[change_x][change_y] = Bishop;
		  }
		}
	}
	

	if(( x == 7) && (y == 5)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x-1][y-1] == " ") ||(arr[x-1][y+1] == " ")){
		  arr[x][y] = " ";
	   arr[change_x][change_y] = Bishop;
		  }
		}
	}
	
	
	
	if(( x == 0) && (y == 2)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x+1][y-1] == " ") ||(arr[x+1][y+1] == " ")){
		  arr[x][y] = " ";
	   arr[change_x][change_y] = bishop;
		  }
		}
	}
	

	if(( x == 0) && (y == 5)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x-1][y-1] == " ") ||(arr[x-1][y+1] == " ")){
		  arr[x][y] = " ";
	   arr[change_x][change_y] = bishop;
		  }
		}
	}
	
	//final bishop
	
	
	//start rook 
	
	
		if(( x == 7) && (y == 0)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x-1][y] == " ")|| (arr[x][y-1] == " " )) {
		  arr[x][y] = " ";
	   arr[change_x][change_y] = Rook;
		  }
		}
	}
	
	
	
	if(( x == 7) && (y == 7)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x-1][y] == " ")){
		  arr[x][y] = " ";
	   arr[change_x][change_y] = Rook;
		  }
		}
	}
	
		if(( x == 0) && (y == 0)) {
	
		if(arr[change_x][change_y] == " "){	
		  if(arr[x+1][y] == " ") {
		  arr[x][y] = " ";
	   arr[change_x][change_y] = rook;
		  }
		}
	}
	
	
	
	if(( x == 0) && (y == 7)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x+1][y] == " ")){
		  arr[x][y] = " ";
	   arr[change_x][change_y] = rook;
		  }
		}
	}
	

	/// start Queen

		if(( x == 7) && (y == 3)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x-1][y] == " ")|| (arr[x-1][y-1] == " " )|| (arr[x][y-1] == " ") || (arr[x][y+1] == " " ) ||(arr[x-1][y+1] == " ")) {
		  arr[x][y] = " ";
	   arr[change_x][change_y] = Queen;
		  }
		}
	}
	


		if(( x == 0) && (y == 3)) {
	
		if(arr[change_x][change_y] == " "){	
		  if((arr[x+1][y] == " ")|| (arr[x+1][y-1] == " " )|| (arr[x][y-1] == " ") || (arr[x][y+1] == " " ) ||(arr[x+1][y+1] == " ")) {
		  arr[x][y] = " ";
	   arr[change_x][change_y] = queen;
		  }
		}
	}
	
	



	for(int i = 0; i < size;++i) {
	 for(int j = 0; j < size; ++j) {
	   std::cout << arr[i][j] << " ";
	 	}
	 std::cout  << std::endl;
	}
}while(no != "n");
}


void gprint(std::string** arr,int size) {

		for(int i = 0; i < size;++i) {
		for(int  j = 0; j < size;++j) {
		 std::cout << arr[i][j] << " " ;
			}
		std::cout << std::endl;
		}

}

int main()
{

	printBoard();

    return 0;
}







