#pragma once

#include <vector>

class AI {
  public:
    AI(int inputSize, int outputSize, int hiddenLayerWidth, int hiddenLayerHeight);

    void update();
    void reset();

    // Give the AI information
    void setInput(const std::vector<float>& input);

    // Get what the AI wants to do
    std::vector<float> getOutput();

  private:
    std::vector<float> input;
    std::vector<float> output;
};
