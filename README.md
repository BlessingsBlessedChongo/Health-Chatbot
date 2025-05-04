# Health Chatbot


A simple health information chatbot implemented in C++ that provides responses to common health-related questions and follows up with relevant additional questions.

## Features

- 💬 **Interactive Chat Interface** - Natural conversation flow
- 🏥 **Health Knowledge Base** - Pre-programmed responses for common health questions
- 🔄 **Follow-up Questions** - Contextual follow-up questions for deeper engagement
- ❓ **Default Handling** - Graceful handling of unrecognized inputs
- 🚪 **Easy Exit** - Simple goodbye command to end conversation

## Technology Stack

- **Language**: C++
- **Data Structures**: `std::map` for knowledge base storage
- **String Handling**: `std::string` for text processing
- **I/O**: Standard console input/output

## Installation

### Prerequisites

- C++ compiler (g++ or equivalent)
- C++ Standard Library

### Compilation

```
g++ -o health_chatbot health_chatbot.cpp
```

### Running the Chatbot

```
./health_chatbot
```

## Usage

1. Run the program
2. Type your health-related question
3. The chatbot will respond and may ask a follow-up question
4. Type "goodbye" to exit the conversation

### Example Conversation

```
You: what is covid-19
Chatbot: COVID-19 is a viral respiratory illness caused by the SARS-CoV-2 virus.
Chatbot: Have you been vaccinated?
```

## Knowledge Base

The chatbot currently knows about:

- COVID-19 information
- Diabetes symptoms
- Stress management techniques
- Basic greetings

## Customization

To add more responses, edit the `knowledgeBase` map in the code:

```
{"your question here", 
    {"The answer to the question", 
     "Follow-up question if needed"}}
```

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/new-health-topic`)
3. Commit your changes (`git commit -m 'Add mental health responses'`)
4. Push to the branch (`git push origin feature/new-health-topic`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Disclaimer

⚠️ **Important**: This chatbot provides general health information only and is not a substitute for professional medical advice. Always consult a healthcare provider for medical concerns.

## Future Improvements

- Add natural language processing
- Expand health topic coverage
- Implement conversation history
- Add multilingual support

To exit the chatbot at any time, simply type "goodbye".
