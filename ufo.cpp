#include <iostream>
#include "ufo_functions.hpp"
#include <algorithm>
#include <cctype>


int main() {
  char again;
  
	greet();
	
	do {
	std::string codeword;
	std::string answer; 
	std::string category;
	char codewordl;
	char answerl;
	bool usercategoryb = false;
	
	do { 
	int usercategory;
	std::cout << "\nPlease enter the number of the category you would like.\n" << "1) Movies\n2) Musical Artists\n3) UK Cities\n4) Countries\n5) Random\n6) Random (Hard)\n";
	std::cin >> usercategory;
	
	switch(usercategory){
		
		case 1 :
			category = "Movies";
			{myMovie code1;
			codeword = code1.get_movie(codeword);}
			break;
			
		case 2 : 
			category = "Musical Artist";
			{myMusic code2;
			codeword = code2.get_music(codeword);}
			break;
		
		case 3 : 
			category = "UK Cities";
			{myCities code3;
			codeword = code3.get_city(codeword);}
			break;
			
		case 4 :
			category = "Countries";
			{myCountries code4;
			codeword = code4.get_country(codeword);}
			break;
			
		case 5 : 
			
			srand(time(NULL));
			{int x = rand() % 4 + 1;
			switch(x){
				
			case 1 :
			category = "Movies";
			{myMovie code5;
			codeword = code5.get_movie(codeword);}
			break;
			
			case 2 : 
			category = "Musical Artist";
			{myMusic code6;
			codeword = code6.get_music(codeword);}
			break;
		
			case 3 : 
			category = "UK Cities";
			{myCities code7;
			codeword = code7.get_city(codeword);}
			break;
			
			case 4 :
			category = "Countries";
			{myCountries code8;
			codeword = code8.get_country(codeword);}
			break;
			
			}
			}
			break;
			
		case 6 : 
		
			category = "Random (Hard)";
			srand(time(NULL));
			{int y = rand() % 4 + 1;
			switch(y){
				
			case 1 :
			{myMovie code9;
			codeword = code9.get_movie(codeword);}
			break;
			
			case 2 : 
			{myMusic code10;
			codeword = code10.get_music(codeword);}
			break;
		
			case 3 : 
			{myCities code11;
			codeword = code11.get_city(codeword);}
			break;
			
			case 4 :
			{myCountries code12;
			codeword = code12.get_country(codeword);}
			break;
			
			}
			}
		
			break;
			
		default : 
			std::cin.clear();
			std::cin.ignore(100, '\n');
		break;
	}
	
		if(usercategory == 1 || usercategory == 2 || usercategory == 3 || usercategory == 4 || usercategory == 5 || usercategory == 6){
			usercategoryb = true;
		}
	} while(usercategoryb == false);
  
  
  for(int p=0; p<codeword.size();p++){
  
  if(codeword[p]==' '){
    
    codeword[p] = '/';
    answer += '/';
    
  }
    else {
      
  answer += '-';
      
    }
  }
  
  int misses = 0;
  
  std::vector<char> incorrect;
  bool guess = false;
  
  char letter;
  bool previous=false;
  
  while(answer != codeword && misses < 7){
    display_misses(misses);
	display_status(incorrect, answer);
	  do {
	previous = false;
  	std::cout << "\nThe category is " << category << ".\n" << "\nPlease enter your guess: ";
    std::cin >> letter;
	
	if(isupper(letter)){
		
		letter=tolower(letter);
		
	}
    
	for(int f=0; f<incorrect.size();f++){
	  
	  if(letter == incorrect[f]){
		  std::cout << "Previously used. Please guess again.\n";
		  previous = true;
		  std::cin.clear();
		  std::cin.ignore(100, '\n');
	  }
	
  } 
  }	while (previous==true);  
   
	
    for(int k=0; k<codeword.length();k++){
		
		if(isupper(codeword[k])){
			
			codewordl=tolower(codeword[k]);
			      if(letter==codewordl){			  
					codewordl=toupper(codewordl);
					answer[k]=codewordl;
					guess = true;
					}
		}
		else {
			codewordl=codeword[k];
			      if(letter==codewordl){
					answer[k]=letter;
					guess = true;
					}
		}
    }
    
    if(guess==true){
      std::cout << "\nCorrect!\n";
    }
    else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
    	misses++;
    }
    guess=false;
	}
	
	for(int g=0; g<codeword.length();g++){
		
			      if(letter==codeword[g]){
					answer[g]=letter;
		
	}
	}
	
	display_misses(misses);
	display_status(incorrect, answer);
	
  for(int q=0;q<codeword.size();q++){
    
  if(codeword[q]=='/'){
    
    codeword[q] = ' ';
    answer[q] = ' ';
    
  }
    
  }
  
  std::cout << "\n\nThe codeword was " << codeword << ".\n";
  end_game(answer, codeword);
  
  std::cin.clear();
  std::cin.ignore(100,'\n');
  std::cout << "\nWould you like to play again? (y/n)";
  std::cin >> again;
  
} while(again=='y');

}