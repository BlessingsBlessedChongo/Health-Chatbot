#include<iostream>
#include<string>
#include<map>

using namespace std;
//Define a struct for chatbot responses
struct responses {
	string answer;
	string followUpQuestion;
};
//Define a map for chatbot knowledge base
map<string, responses>
knowledgeBase = {
	{"hello", {"Hi! How canI assist you today?","What's your concern?"}},{"Goodbye",{"It was nice chatting with you","It was nice chatting with you"}},
	{"what is covid-19", {"COVID-19 is a viral respiratory illness caused by the SARS-CoV-2 virus.", "Have you been vaccinated?"}},
	{"what are the symptoms of diabetes", {"Common symptoms include increased thirst, frequent urination, and blurred vision.", "Have you consulted a doctor?"}},
	{"how to manage stress", {"Try relaxation techniques like meditation, deep breathing, or yoga.", "Would you like more tips?"}},
	{"default", {"Sorry, I didn't understand that.", "Please rephrase your question"}}
};
//function to get chatbot response
  responses getResponse(const string& input) {
	auto it = knowledgeBase.find(input);
	return(it!= knowledgeBase.end()) ? it->second : knowledgeBase["default"];

}
  int main() {
	  string user_input;
	  cout << "Health chatbot" << endl;
	  cout << "Type 'goodbye' to exit." << endl;

	  while (true) {
		  cout << "You: ";
		  getline(cin, user_input);
		  if(user_input == "goodbye"){
		  cout << "Chatbot: " << knowledgeBase["goodbye"].answer << endl;
		  break;
	  }
	  responses response = getResponse(user_input);
	  cout << "chatbot: " << response.answer << endl;
	  if (!response.followUpQuestion.empty()) {
		  cout << "chatbot: " << response.followUpQuestion << endl;
	  }
  }
  return 0;
  }