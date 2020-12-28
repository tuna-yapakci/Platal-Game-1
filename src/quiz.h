#pragma once

#include <string>
#include <vector>

class Question {
    // constructor
    // TODO: create list of constant questions.
    Question(const std::string& question_text, const std::string& answer);

    void AddOption(const std::string& option);

    void SetOptions(const std::vector<std::string>& options);

    void RenderQuestion();

    bool CheckCorrect();

    void PickOption(); // TODO: think about how to implement this

  private:
    std::string question_text_;        // question to ask
    std::vector<std::string> options_; // options available
    std::string answer_; // correct answer to question [make indexes/pters]
    std::string chosen_; // answer chosen by user
};

class Quiz {
    Quiz(const std::vector<Question>& questions);

    void SetPass(int pass_condition); // optional, should be at 3

    void ExecuteQuiz(); // TODO e.g. runs RenderQuestions for each question.

    void DisplayScore(); // TODO

    // Return the verdict of the Quiz.
    bool Pass();

  private:
    int correct_answers_ = 0; // stores number of correct answers
    int pass_condition_ = 3;  // minimum level of correct answers needed to pass
    std::vector<Question> questions_;
};
