#include <iostream>

std::string field_validation();
std::string number_field_validation();
std::string email_field_validation();
std::string web_links_field_validation();
std::string credit_card_number_field_validation();
std::string phone_number_field_validation();




 std::string phone_number_field_validation() {
 std::string correct = "true";
 std::string incorrect = "false";
 std::string phone;
 std::cout << "Input phone number " << std::endl;
 std::cin >>  phone;
   
  for(int i = 0; i < phone.length();++i) {
   if(phone[i] >= 48 && phone[i] <= 57 || (phone[0] ==43 ||         	phone[i] == 45)) {			
   if(phone[i] >= 0  && phone[i] < 48 || phone[i] > 57  ){
	  return incorrect;
   }
     return correct;
   }
   else{	
     return incorrect;
	}
  }
  return incorrect;

};

std::string credit_card_number_field_validation(){
	std::string incorrect = "false";
	std::string correct = "true";
	std::string credit;
	std::cout << "Input credit card " << std::endl;
	std::cin>> credit;
	if(credit.length() < 13 || credit.length() >16  ){
		return incorrect;
	}
	if(credit.length() >= 13  && credit.length() <=16){
	for(int i = 0;i< credit.length();++i) {
		if(credit[i]  < 48 || credit[i] > 57) {
		  return incorrect;
		 exit(0);
		}
	   }
	}
	return correct;

};


std::string web_links_field_validation(){
  std::string incorrect = "false";
  std::string correct = "true";
  std::string web_links;
  std::cout << "Input web_links " << std::endl;
  std::cin >>web_links;

      for(int i = 0; i < web_links.length(); ++i ) {
	   if(web_links[i] >=97 && web_links[i] <=122) {
	    return correct;
	   }
	   else if(web_links[i] >=48  && web_links[i] <= 57 ){
	    return correct;
	 }
	   else if(
	   (web_links[i] == 45) ||
	   (web_links[i] == 47) ||
	   (web_links[i] == 59) ||
	   (web_links[i] == 58) ||
	   (web_links[i] == 61) ||
	   (web_links[i] == 63) ||
	   (web_links[i] == 38) ) {
	   return correct;
	   }else {
	   return incorrect;
	   }
	     
	  }
 return incorrect;

}

std::string field_validation() {

	std::string correct = "true";
	std::string incorrect = "false";
	std::cout << "Input field data " << std::endl;
        std::string data;
 	std::cin >> data;
	if( data[0] == 46) {
		return incorrect;
	}
	if(data.length() == 10) {
    for(int i = 0; i < data.length();++i) {
		
			std::string num1 ;
			num1.push_back(data[0]);
			num1.push_back(data[1]);
		 int num2 = stoi (num1);
		 if(num2 >  31) {
		 	return incorrect;
		 }
		 
		 if(data[2] !=  46 ) {
		   return incorrect;
		 	}
           	std::string data3_4 ;
			data3_4.push_back(data[3]);
			data3_4.push_back(data[4]);
          int data4 = stoi(data3_4);
		 	if(data4 > 12) {
			  return incorrect;
			}
		 
         if(data[5] != 46 ){
		  return incorrect;
		 }
		 if(data[6] < 48 && data[6] > 57){
		 	return incorrect;
		 }
          if(data[7] < 48 && data[7] > 57){
		 	return incorrect;
		 }
		  if(data[8] < 48 && data[8] > 57){
		 	return incorrect;
		 }
          if(data[9] < 48 && data[9] > 57){
		 	return incorrect;
		 }
		
	}
	return correct;
}
return incorrect;

}

std::string number_field_validation() {
	std::string correct ="true";
	std::string incorrect = "false";
	std::string number;	
	std::cout << "Input number " << std::endl;	
	std::cin >>number;
	 for(int i = 0 ; i< number.length();++i) {
          if(number[i] >= 48 && number[i] <= 57 ){
	   return correct;
	 }
	}
	return incorrect;
}
void validation_page() {

std::cout << "1.Email field" << std::endl;
std::cout << "2.Number field" << std::endl;
std::cout << "3.Date field " << std::endl;
std::cout << "4.Web links field" << std::endl;
std::cout << "5.Credit card number field" << std::endl;
std::cout << "6.Phone number field "  << std::endl;

std::cout << "Which validation field do you want to access?" <<std::endl;
int number;
std::cin >> number;
switch(number) {

		case 1:	
	         std::cout << email_field_validation();
      	         break;
		case 2:
		 std::cout <<number_field_validation();
		 break;
		case 3:
	         std::cout <<field_validation();
		 break;
		case 4:
		 std::cout << web_links_field_validation();
		 break;
		case 5:
	  	 std::cout<<credit_card_number_field_validation();
		 break;
		case 6:
	         std::cout<<phone_number_field_validation();
		 break;
		default:
			std::cout << "Invalid number" << std::endl;
}

} 


std::string email_field_validation() {
	std::string correct = "true";
        std::string incorrect = "false";
	std::string email;
	std::cout << "Input Email " << std::endl;
	std::cin >> email;

	if(email.length() <= 5) {
	return incorrect;
	}
	for(int i = 0; i < email.length();++i) {
		if(email[i] >= 32 && email[i] <=126 ){	
	
		if(email[0] == 46 ) {
		  return incorrect;
		}
		if(email[email.length()-1] == 46) {
		 return incorrect;
		}
		if(email[0] == 64) {
		 return incorrect;
		}
          return correct;
		}
	}
  return correct;
}




int main() {
  std::cout << "This  is  Validation page" << std::endl;
 validation_page(); 

} 
